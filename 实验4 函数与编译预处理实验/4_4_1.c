#include<stdio.h>
#define CHANGE 1

void trs(char *str)
{
	int i = 0;
	while (*(str+i) != 0)
	{
		if (*(str + i) >= 'a'&& *(str + i) <= 'z')
			*(str + i) += 'A' - 'a';
		else if (*(str + i) >= 'A'&& *(str + i) <= 'Z')
			*(str + i) += 'a' - 'A';
		i++;
	}
}

int main()
{
	char str[100];
	int n, i = 0;
	while ((str[i]=getchar()) != '\n')
	{
		i++;
	}
	str[i+1] = '\0';
	if (CHANGE)
		trs(str);
	printf("%s", str);
	return 0;
}