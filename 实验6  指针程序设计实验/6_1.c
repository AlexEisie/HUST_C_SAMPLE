/*
������������Դ�����У�����strcopy(t, s)�Ĺ����ǽ��ַ���s���Ƹ��ַ���t�����ҷ��ش�t���׵�ַ��
�뵥�����ٳ��򣬸��ݳ�������ʱ���ֵ������۲쵽���ַ�����ֵ���������ų�Դ������߼�����ʹ֮�ܰ���Ҫ��������½����
Input a string:
programming�L ���������룩
programming
Input a string again:
language�L ���������룩
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
	s3 = (char*)malloc(sizeof(char) * 100);		//s1s2s3Ϊ����ָ�룬�ȷ���ռ�
	printf("Input a string:\n");	//�����˲���Ҫ�Ĳ���s2
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");		//�����˲���Ҫ�Ĳ���s2
	scanf("%s", s2);
	strcopy(s3, s2);		//��s2���Ƶ�s3
	printf("%s\n", s3);
	return 0;
}

/*���ַ���s���Ƹ��ַ���t�����ҷ��ش�t���׵�ַ*/
char* strcopy(char* t, const char* s)
{
	while (*t++ = *s++);
	return (t);
}
