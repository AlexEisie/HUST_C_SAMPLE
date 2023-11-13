#include<stdio.h>
#include<stdlib.h>

void scanner(int* sqr[], int m, int n)
{
	int r = 0, c = 0, order = 1, i=0,max;	//order=0向右边，order=1向左边
	int* newnum;
	max = m > n ? m : n;
    max++;
	newnum = (int*)malloc(sizeof(int) * m * n);
	while (i <= max)
	{
		if (order)
		{
			r = m - 1;
			while (r >=0)
			{
				while (c < n)
				{
					if (c + r == i) printf("%d ", sqr[r][c]);
					c++;
				}
				c = 0;
				r--;
			}
			order = 0;
		}
		else
		{
			c = n - 1;
			while (c>=0)
			{
				while (r < m)
				{
					if (c + r == i) printf("%d ", sqr[r][c]);
					r++;
				}
				r = 0;
				c--;
			}
			order = 1;
		}
		i++;
		r = 0, c = 0;
	}
}

int main()
{
	int m, n, i = 0, r = 0, c = 0;
	scanf("%d%d", &m, &n);
	int** sqr = (int**)malloc(sizeof(char*) * m);
	while (i < m)
	{
		sqr[i] = (int*)malloc(sizeof(int) * n);
		i++;
	}
	while (r < m)
	{
		while (c < n)
		{
			scanf("%d", &sqr[r][c]);
			c++;
		}
		c = 0;
		r++;
	}
	scanner(sqr, m, n);
	return 0;
}