#include<stdio.h>
#include<stdlib.h>		//使用了malloc函数，需要stdlib.h
#include<string.h>
#define N 4
#pragma warning(disable : 4996)

void strsort(char* s[], int size)
{
	char* temp;		//使用temp间接访问这N个字符串，类型为char *	
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (s[j][0]>s[j+1][0])		//按照首个字符排序捏
			{
				temp = s[j];
				s[j]=s[j+1];		//实现s[j]和s[j+1]内容交换的效果
				s[j + 1] = temp;
			}
}

int main()
{
	int i;
	char* s[N], t[50];
	for (i = 0; i < N; i++)
	{
		gets(t);
		s[i] = (char*)malloc(strlen(t) + 1);
		strcpy(s[i],t);		//将t的内容复制到s[i]中
	}
	strsort(s, N);		//参数传入的是s，以及大小N
	for (i = 0; i < N; i++) { puts(s[i]); free(s[i]); }
	return 0;
}
