#include<stdio.h>

int main()
{
	int i = 100;
	while (i <= 999)
	{
		if ((i * i) % 1000 == i)
			printf("%d\n", i);
		i++;
	}
	return 0;
}