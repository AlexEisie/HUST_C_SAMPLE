#include<stdio.h>

int main()
{
	char input,nextchar1,nextchar2;
	while ((input = getchar()) != EOF)
	{
		if (input==' ')
		{
			putchar(input);
			nextchar1 = getchar();
			if (nextchar1 == ' ')
			{
				while ((nextchar2 = getchar()) == ' ');
				putchar(nextchar2);
			}
			else
				putchar(nextchar1);
		}
		else
			putchar(input);
	}
	return 0;
}