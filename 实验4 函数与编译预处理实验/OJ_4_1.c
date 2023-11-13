/*
任务描述
本关任务：编程验证歌德巴赫猜想：任何一个大于等于4的偶数都是两个素数之和。要求设计一个函数，接受形参n，以“n=n1+n2”的形式输出结果，
若有多种分解情况，取n1最小的一个输出。
例如：n=6，输出“6=3+3”并换行。

main函数循环接收从键盘输入的整数n，如果n是大于或等于4的偶数，调用上述函数进行验证，直至输入Ctrl+Z程序结束。

测试说明
平台会对你编写的代码进行测试：

测试输入：6
预期输出：6=3+3
*/

#include<stdio.h>

int isZ(int num)
{
	int i = 2,flag=1;
	while (i <= num / 2)
	{
		if (num % i == 0)
			flag =0;
		i++;
	}
	return flag;
}

void fakemain(int n)
{
	int n1 = 2, n2 = 2,flag=0;
	while ((n1<n)&&(flag==0))
	{
		if (isZ(n1))
		{
			if (isZ(n - n1))
			{
				flag = 1;
				break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
		n1++;
	}
	printf("%d=%d+%d\n", n, n1, n - n1);
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		fakemain(n);
	}
	return 0;
}