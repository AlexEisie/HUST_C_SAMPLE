# include<stdio.h>
# include<string.h>
#pragma warning(disable : 4996)
int main(void)
{
	char* (*p)(char *,char *)=strcpy;		//����ָ��p,��������char *������Ϊchar *,char *
	char a[80], b[80], * result;
	int choice;
	while (1)
	{
		do
		{
			printf("\t\t1 copy string.\n");
			printf("\t\t2 connect string.\n");
			printf("\t\t3 parse string.\n");
			printf("\t\t4 exit.\n");
			printf("\t\tinput a number (1-4) please.\n");
			scanf("%d", &choice);
		} while (choice < 1 || choice>4);
		switch (choice)
		{
		case 1:	p = strcpy;	break;
		case 2:	p = strcat;	break;
		case 3:	p = strtok;	break;
		case 4:	goto down;
		}
		getchar();
		printf("input the first string please!\n");
		gets(a);		//����a�ַ���
		printf("input the second string please!\n");
		gets(b);		//����b�ַ���
		result = p(a, b);		//����pָ��ĺ���
		printf("the result is %s\n", result);
	}
down:
	return 0;
}
