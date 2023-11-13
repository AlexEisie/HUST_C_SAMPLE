#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int input,i=31;
	scanf("%d", &input);
	char str[33];
	str[32] = '\0';
	while (i >= 0)
	{
		if ((input & (int)pow(2, (double)(31 - i)))!=0)
			str[i] = '1';
		else
			str[i] = '0';
		i--;
	}
	printf("%s", str);
	return 0;
}