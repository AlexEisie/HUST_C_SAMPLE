#include<stdio.h>

int main()
{
	char input;
	while ((input = getchar()) != EOF)
	{
		if (input <= 'Z' && input >= 'A')
			input -= 'A' - 'a';
		putchar(input);
	}
	
	return 0;
}