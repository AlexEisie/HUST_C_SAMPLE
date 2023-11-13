#include<stdio.h>

struct ca
{
	char name[15];
	int c;
};

struct ca student[30];
int n;
void studentadd();
void reorder();
void find();
void output();
void swap(int* a, int* b, char* a1, char* b1);

int main()
{
	int select;
//	printf("输入选项\n");
	while (scanf("%d", &select))
	{
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			studentadd();
			break;
		case 2:
			reorder();
			break;
		case 3:
			output();
			break;
		case 4:
			find();
			break;
		}
	}
	return 0;
}

void studentadd()
{
//	printf("输入人数\n");
	int i = 0;
	scanf("%d", &n);
	while (i < n)
	{
		scanf("%s", student[i].name);
		scanf("%d", &student[i].c);
		i++;
	}
	printf("%d records were input!\n", n);
}

void reorder()
{
	int i = 0,j = 1;
	while (i < n - 1)
	{
		while (j < n - i)
		{
			if (student[i].c < student[i + j].c)
				swap(&student[i].c,&student[i + j].c,student[i].name,student[i+j].name);
			j++;
		}
		j = 1;
		i++;
	}
	printf("Reorder finished!\n");
}

void output()
{
	int i = 0;
	while (i < n)
	{
		printf("%s %d\n", student[i].name, student[i].c);
		i++;
	}
}

void find()
{
	int i = 0, n, flag = 0;
	scanf("%d", &n);
	while (i < n)
	{
		if (student[i].c == n)
		{
			flag = 1;
			printf("%s %d", student[i].name, student[i].c);
			break;
		}
		i++;
	}
	if (flag == 0)
		printf("not found!");
}

void swap(int* a, int* b, char* a1, char* b1)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;

	char temp;
	int i;
	for (i = 0; i < n; i++)
	{
		temp = *(a1 + i);
		*(a1 + i) = *(b1 + i);
		*(b1 + i) = temp;
    }
}

