#include<stdio.h>
#include<stdlib.h>		//ʹ����malloc��������Ҫstdlib.h
#include<string.h>
#define N 4
#pragma warning(disable : 4996)

void strsort(char* s[], int size)
{
	char* temp;		//ʹ��temp��ӷ�����N���ַ���������Ϊchar *	
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (s[j][0]>s[j+1][0])		//�����׸��ַ�������
			{
				temp = s[j];
				s[j]=s[j+1];		//ʵ��s[j]��s[j+1]���ݽ�����Ч��
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
		strcpy(s[i],t);		//��t�����ݸ��Ƶ�s[i]��
	}
	strsort(s, N);		//�����������s���Լ���СN
	for (i = 0; i < N; i++) { puts(s[i]); free(s[i]); }
	return 0;
}
