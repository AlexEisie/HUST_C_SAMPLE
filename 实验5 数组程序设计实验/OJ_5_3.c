#include<stdio.h>
int pos[11];
int solution = 0;

int judge(int r,int tryingpos)		//用与判断该位置能否放皇后
{
	int i = 1;
	while (r > 1)		//判断上r行皇后所在列数是否相同或者等于
	{
		if (pos[--r] == tryingpos||pos[r]== tryingpos -i||pos[r]== tryingpos+i)
			return 0;
		i++;
	}
	return 1;
}

void solved(int max)		//用于输出结果和计算解数
{
	solution++;
}

void queens(int r, int max)
{
	int i = 1;
	if (r > max)
	{
		solved(max);
	}
	else
	{
		while (i <= max)
		{
			if (judge(r, i))
			{
				pos[r] = i;
				queens(r + 1, max);
			}
			i++;
		}
	}
}

int main()
{
	int max;
	scanf("%d", &max);
	queens(1,max);
	if(solution!=0)
        printf("%d", solution);
    else
        printf("无解");
	return 0;
}