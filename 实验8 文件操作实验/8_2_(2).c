#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch;		//������Ҫ�ļ�ָ�룬ɾ������
	if (argc != 2)
	{
		printf("Arguments error!\n");
		exit(-1);
	}
	if ((freopen(argv[1], "r", stdin)) == NULL)		//�ض������룬����stdin���ض���argv[1]���ļ�
	{
		printf("Can't open %s file!\n", argv[1]);
		exit(-1);
	}

	while ((ch = getchar()) != EOF)          //��stdinֱ�Ӷ�ȡ
		putchar(ch);                  /* ����ʾ����д�ַ� */
	fclose(stdin);		//�ر��ض���
	return 0;
}
