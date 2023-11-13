#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch;		//不再需要文件指针，删除即可
	if (argc != 2)
	{
		printf("Arguments error!\n");
		exit(-1);
	}
	if ((freopen(argv[1], "r", stdin)) == NULL)		//重定向输入，访问stdin将重定向到argv[1]的文件
	{
		printf("Can't open %s file!\n", argv[1]);
		exit(-1);
	}

	while ((ch = getchar()) != EOF)          //从stdin直接读取
		putchar(ch);                  /* 向显示器中写字符 */
	fclose(stdin);		//关闭重定向
	return 0;
}
