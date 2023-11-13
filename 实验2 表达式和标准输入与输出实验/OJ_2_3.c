#include<stdio.h>

int main()
{
	unsigned int ip;
	while(scanf("%d",&ip) != EOF)
		printf("%d.%d.%d.%d\n", ip >> 24, (ip & 0xff0000) >> 16, (ip & 0xff00) >> 8, ip & 0xff);
	return 0;
}