#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXNAMELENGTH 10

struct student		//学号、姓名、英语、高等数学、普通物理、C语言程序设计四门课程的成绩
{
	char name[MAXNAMELENGTH];
	int ID;
	int score[5];	//1234分别代表成绩英语、高等数学、普通物理、C语言
	double ave;
	struct student* next;
};

void getinfo(struct student**, int);
void showinfo(const struct student*, int);
void chinfo(const struct student*, int);
void ave(const struct student*, int);
void result(const struct student*, int);
void sort(struct student**, int);

void makefree(const struct student* head, int depth)
{
	int i = 1, l = 0;
	struct student* cur = head;
	while (l <= depth)
	{
		cur = head;
		i = 1;
		while (i <= depth - l)
		{
			cur = cur->next;
			i++;
		}
		l++;
		free(cur);
	}
}

int main()
{
	int select, depth;
	struct student* head = NULL;
	scanf("%d", &select);
	;	while (select)		//① 输入每个学生的各项信息。② 输出每个学生的各项信息。③ 修改指定学生的指定数据项的内容。④ 统计每个同学的平均成绩（保留2位小数）。⑤ 输出各位同学的学号、姓名、四门课程的总成绩和平均成绩。
	{
		if (!select)
			break;
		switch (select)
		{
		case 1:
			scanf("%d", &depth);
			getinfo(&head, depth);
			break;
		case 2:
			showinfo(head, depth);
			break;
		case 3:
			chinfo(head, depth);
			break;
		case 4:
			ave(head, depth);
			break;
		case 5:
			result(head, depth);
			break;
		case 6:
			sort(&head, depth);
		}
		scanf("%d", &select);
	}
	makefree(head, depth);
	return 0;
}

void getinfo(struct student** headp, int depth)		//学号、姓名、英语、高等数学、普通物理、C语言程序设计四门课程的成绩
{
	struct student* head = NULL, * cur;
	int i = 2;
	head = (struct student*)malloc(sizeof(struct student));
	cur = head;
	cur->next = NULL;
	scanf("%d", &cur->ID);
	scanf("%s", cur->name);
	scanf("%d%d%d%d", &cur->score[1], &cur->score[2], &cur->score[3], &cur->score[4]);
	cur->ave = cur->score[1] + cur->score[2] + cur->score[3] + cur->score[4];
	cur->ave = cur->ave / 4;
	while (i <= depth)
	{
		cur->next = (struct student*)malloc(sizeof(struct student));
		cur = cur->next;
		scanf("%d", &cur->ID);
		scanf("%s", cur->name);
		scanf("%d%d%d%d", &cur->score[1], &cur->score[2], &cur->score[3], &cur->score[4]);
		cur->ave = cur->score[1] + cur->score[2] + cur->score[3] + cur->score[4];
		cur->ave = cur->ave / 4;
		cur->next = NULL;
		i++;
	}
	*headp = head;
	printf("完成了%d位同学的成绩输入\n", depth);
}

void showinfo(const struct student* head, int depth)
{
	int i = 1;
	struct student* cur = head;
	while (i <= depth)
	{
		printf("%d %s %d %d %d %d\n", cur->ID, cur->name, cur->score[1], cur->score[2], cur->score[3], cur->score[4]);
		cur = cur->next;
		i++;
	}
}

void chinfo(const struct student* head, int depth)
{
	int i = 1, target, scp;
	char str[MAXNAMELENGTH];
	scanf("%d%d", &target, &scp);
	struct student* cur = head;
	while (i <= depth)
	{
		if (cur->ID == target)
			break;
		else
			cur = cur->next;
		i++;
	}
	if (scp == 0)
	{
		scanf("%s", str);
		strcpy(cur->name, str);
	}
	else
		scanf("%d", &cur->score[scp]);
	printf("%d %s %d %d %d %d\n", cur->ID, cur->name, cur->score[1], cur->score[2], cur->score[3], cur->score[4]);
}
void ave(const struct student* head, int depth)
{
	int i = 1, sum;
	struct student* cur = head;
	while (i <= depth)
	{
		sum = cur->score[1] + cur->score[2] + cur->score[3] + cur->score[4];
		printf("%d %s %.2lf\n", cur->ID, cur->name, (float)sum / 4);
		cur = cur->next;
		i++;
	}
}

void result(const struct student* head, int depth)
{
	int i = 1, sum;
	struct student* cur = head;
	while (i <= depth)
	{
		sum = cur->score[1] + cur->score[2] + cur->score[3] + cur->score[4];
		printf("%d %s %d %.2lf\n", cur->ID, cur->name, sum, (float)sum / 4);
		cur = cur->next;
		i++;
	}
}


void sort(struct student** headp, int depth)	//⑥增加按照平均成绩进行升序（0）及降序（1）排序的函数，排序可指定用选择法（0）或冒泡法（1）。
{
	int select1, select2;
	scanf("%d%d", &select1/*升降序*/, &select2/*排序方式*/);
	struct student* cur = *headp,*temp;
	//为链表加一个空头
	cur = (struct student*)malloc(sizeof(struct student));
	cur->next = *headp;
	*headp = cur;
	int i = 1;
	if (select2)		//冒泡法
	{
		while (i++<depth)
		{
			cur = *headp;
			while (cur->next->next!=NULL)
			{
				temp = cur->next;
				if (select1 ? (cur->next->ave < temp->next->ave): (cur->next->ave > temp->next->ave))
				{
					cur->next=temp->next;
					temp->next = temp->next->next;
					cur->next->next = temp;
				}
				cur = cur->next;
			}
		}
	}
	else		//选择法
	{
		struct student* checker;
		while (cur->next->next != NULL)	//temp用于储存，checker用于循环查找
		{
			checker = cur->next;
			temp = cur;
			while (checker->next!=NULL)
			{
				if (!select1 ? (checker->next->ave < temp->next->ave) : (checker->next->ave > temp->next->ave))
					temp = checker;
				checker = checker->next;
			}
			//此时temp->next指向第x大(小)的结点，cur->next指向待替换的结点。
			checker = cur->next;
			cur->next = temp->next;
			temp->next = checker;
			
			checker = cur->next->next;
			cur->next->next = temp->next->next;
			temp->next->next = checker;
			cur = cur->next;
		}
	}

	//输出排序后结果
	*headp = (*headp)->next;		//去除空头
	cur = *headp;
	while (cur != NULL)
	{
		printf("%d %s %.2lf\n", cur->ID, cur->name, cur->ave);
		cur = cur->next;
	}
}