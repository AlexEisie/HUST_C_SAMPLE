#include<stdio.h>
#include<math.h>
int zms[20]={0};
int zmsi=0;

int judge(int num,int k)
{
	int i = 1, sum = 0, numbk = num;
	sum += (int)pow((double)(num % 10), (double)k);
	while (num/=10,num!=0)
	{
		sum += (int)pow((double)(num % 10), (double)k);
	}
	if (sum == numbk)
	{
		zms[zmsi] = numbk;
		zmsi++;
		return 1;
	}
	else
		return 0;
}

int main()
{
	int num=2, k=3,counter=0;
	while (scanf("%d", &k),k!=0)
	{
		num = (int)(pow(10, (double)(k - 1)));
		while (num < (int)(pow(10, (double)k)))
		{
			if ((judge(num, k)) != 0)
			{
				counter++;
			}
			num++;
		}
		switch (k)
		{
		case 3:
			printf("%d位的水仙花数共有%d个", k, counter);
			break;
		case 4:
			printf("%d位的四叶玫瑰数共有%d个", k, counter);
			break;
		case 5:
			printf("%d位的五角星数共有%d个", k, counter);
			break;
		case 6:
			printf("%d位的六合数共有%d个", k, counter);
			break;
		case 7:
			printf("%d位的北斗星数共有%d个", k, counter);
			break;
		case 8:
			printf("%d位的八仙数共有%d个", k, counter);
			break;
		}
		counter = 0;
		zmsi = 0;
		while (zms[zmsi + 1] != 0)
		{
			printf("%d,", zms[zmsi]);
			zms[zmsi] = 0;
			zmsi++;
		}
		printf("%d\n", zms[zmsi]);
		zms[zmsi] = 0;
		zmsi = 0;
	}
	return 0;
}