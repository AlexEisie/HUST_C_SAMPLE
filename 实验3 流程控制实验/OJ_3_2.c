#include<stdio.h>

int main()
{
	int i=0, j=1, N,num=1,numbk,lengthofnum=1,spacei=1,spaceamount;
	scanf("%d", &N);
	while (i <= N)
	{
		spaceamount = (N - i) * 2 + N;
		while (spacei <= spaceamount)
		{
			printf(" ");
			spacei++;
		}
		spacei = 1;
		printf("1   ");
		while (j <= i)
		{
			num = num * (i - j + 1) / j;
			numbk = num;
			printf("%d", num);
			while (numbk /= 10, numbk)
			{
				lengthofnum++;
			}
			switch (lengthofnum)
			{
			case 1:
				printf("   ");
				break;
			case 2:
				printf("  ");
				break;
			case 3:
				printf(" ");
				break;
			}
			lengthofnum = 1;
			j++;
		}
		num = 1;
		j = 1;
		printf("\n");
		i++;
	}
	return 0;
}