#include<stdio.h>

int judge(int n)
{
	int factors = 1, factorssum = 0;
	while (factors <= n/2)
	{
		if (n % factors == 0)
		{ 
			factorssum += factors;
		}
		factors++;
	}
	if (factorssum == n)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int n = 2,factors=2;
	while (n <= 10000)
	{
		if (judge(n))
		{
			printf("%d=1", n);
			while (factors <= n / 2)
			{
				if (n % factors == 0)
				{
					printf("+%d", factors);
				}
				factors++;
			}
			printf("\n");
			factors = 2;
		}
		n++;
	}
	return 0;
}