#include<stdio.h>

int seat[20][5];

int validspaceinlinex(int x)
{
	int vsl = 5, l = 0;
	while (l < 5)
	{
		if (seat[x][l] == 0)
		{
			vsl = l;
			break;
		}
		l++;
	}
	return vsl;
}

int finesuitableline(int i, int req)
{											
	int valid = validspaceinlinex(i);
	if (5-valid < req)
	{
		return finesuitableline(i + 1, req);
	}
	else
		return i;
}



void printresult()
{
	int i = 0, l = 0;
	while (i < 20)
	{
		l = 0;
		while (l < 5)
		{
			if (seat[i][l])
				printf("1 ");
			l++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	int i = 0, l = 0;
	char cha[] = { '0','A', 'B','C','D','F' };
	while (i < 20)
	{
		while (l < 5)
			seat[i][l++] = 0;
		i++;
	}
	i = 0, l = 0;
	int n, req, cr = 1, valid, ic;
	scanf("%d", &n);
	int ll;
	while (cr <= n)
	{
		if (cr <= 20)
		{
			ll = 1;
			i = 0;
			scanf("%d", &req);
			ic = finesuitableline(0, req);
			l = validspaceinlinex(ic);
			while (ll++ <= req)
			{
				seat[ic][l++] = 1;
				printf("%d%c", ic + 1, cha[l]);
				if ((ll - 1) != req)
					printf(" ");
			}
			printf("\n");
		}
		else
		{
			scanf("%d", &req);
			int x=req;
			while (req)
			{
				ic = 0;
				while (5 - validspaceinlinex(ic) == 0)
				{
					ic++;
				}
				l = validspaceinlinex(ic);
				seat[ic][l] = 1;
				printf("%d%c ", ic + 1, cha[validspaceinlinex(ic)]);
				req--;
			}
		}
		cr++;
	}
	return 0;
}