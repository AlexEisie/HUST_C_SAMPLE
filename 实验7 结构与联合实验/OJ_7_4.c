#include<stdio.h>
#include<stdlib.h>

struct person
{
	int num;		//位置
	int status;		//0状态出圈
	struct person* next;
};

struct person* creatchain(int);

int main()
{
	int n=0, m, alive, i = n, count = 1;
	scanf("%d%d", &n, &m);
	struct person* head=creatchain(n);
	struct person* cur = head;
	alive=n;
	while (alive > 1)
	{
		count = 1;
		while (count < m)
		{
			if (cur->next != NULL)
			{
				cur = cur->next;
				while (!cur->status)
				{
					if (cur->next != NULL)
						cur = cur->next;
					else
						cur = head;
				}
			}
			else
			{
				cur = head;
				while (!cur->status)
				{
					if (cur->next != NULL)
						cur = cur->next;
					else
						cur = head;
				}
			}
			count++;
		}
		cur->status = 0;
		printf("%d", cur->num);
		if (cur->next != NULL)
		{
			cur = cur->next;
			while (!cur->status)
			{
				if (cur->next != NULL)
					cur = cur->next;
				else
					cur = head;
			}
		}
		else
		{
			cur = head;
			while (!cur->status)
			{
				if (cur->next != NULL)
					cur = cur->next;
				else
					cur = head;
			}
		}
		alive--;
		if (alive == 1)
		{
			printf("\n%d", cur->num);
		}
		else
			printf(" ");
	}

	return 0;
}

struct person* creatchain(int depth)		//创建链表
{
	int i = 1;
	struct person* head = NULL, * cur;
	cur = (struct person*)malloc(sizeof(struct person));
	head = cur;
	cur->num = i++;
	cur->status = 1;
	cur->next = NULL;
	while (i <= depth)
	{
		cur->next = (struct person*)malloc(sizeof(struct person));
		cur = cur->next;
		cur->num = i++;
		cur->status = 1;
		cur->next = NULL;
	}
	return head;
}