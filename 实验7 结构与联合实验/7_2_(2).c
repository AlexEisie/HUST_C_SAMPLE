
#include "stdio.h"
#include "stdlib.h"
struct s_list
{
	int data;
	struct s_list* next;
};
void create_list(struct s_list** headp, int* p);

int main(void)
{
	struct s_list* head = NULL, * p;
	int s[] = { 1,2,3,4,5,6,7,8,0 };
	create_list(&head, s);
	p = head;
	while (p)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
	return 0;
}
void create_list(struct s_list** headp, int* p)
{
	struct s_list* loc_head = NULL, * tail;
	if (p[0] == 0);
	else
	{
		loc_head = (struct s_list*)malloc(sizeof(struct s_list));
		loc_head->data = *p++;
		loc_head->next = NULL;		//最先进的结构指向为空
		tail = loc_head;
		while (*p)
		{
			tail = (struct s_list*)malloc(sizeof(struct s_list));		//tail用于申请新的结构空间。
			tail->next = loc_head;	//新的结构空间指向上一个(loc_head)。
			tail->data = *p++;		//赋值。
			loc_head = tail;	//保证loc_head是最新的结构空间
		}
	}
	*headp = loc_head;		// 使头指针headp指向最新创建的链表
}
