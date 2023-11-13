#include<stdio.h>

void turn(int image[][30],int result[][30],int n,int m)
{
	int r = 0, c = 0;
	while (c < n)
	{
		r = 0;
		while (r < m)
		{
			result[r][c] = image[c][m - 1 - r];
			r++;
		}
		c++;
	}
}

int main()
{
	int image[30][30];
	int n, m, r = 0, c = 0;
	int result[30][30];
	scanf("%d%d",& n, &m);
	while (r < n)
	{
		c = 0;
		while (c < m)
		{
			scanf("%d", &image[r][c]);
			c++;
		}
		r++;
	}
	turn(image,result,n,m);
	r = 0;
	while (r < m)
	{
		c = 0;
		while (c < n)
		{
			printf("%d", result[r][c]);
			if (c != n - 1) printf(" ");
            c++;
		}
		printf("\n");
		r++;
	}
	return 0;
}