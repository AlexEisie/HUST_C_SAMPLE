/*
在下面所给的源程序中，函数strcopy(t, s)的功能是将字符串s复制给字符串t，并且返回串t的首地址。
请单步跟踪程序，根据程序运行时出现的现象或观察到的字符串的值，分析并排除源程序的逻辑错误，使之能按照要求输出如下结果：
Input a string:
programming↙ （键盘输入）
programming
Input a string again:
language↙ （键盘输入）
language

*/
#pragma warning(disable : 4996)
#include<stdlib.h>
#include<stdio.h>
char* strcopy(char*, const char*);
int main(void)
{
	char* s1, * s2, * s3;
	s1 = (char*)malloc(sizeof(char) * 100);
	s2 = (char*)malloc(sizeof(char) * 100);
	s3 = (char*)malloc(sizeof(char) * 100);		//s1s2s3为悬挂指针，先分配空间
	printf("Input a string:\n");	//传入了不需要的参数s2
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");		//传入了不需要的参数s2
	scanf("%s", s2);
	strcopy(s3, s2);		//将s2复制到s3
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char* strcopy(char* t, const char* s)
{
	while (*t++ = *s++);
	return (t);
}
