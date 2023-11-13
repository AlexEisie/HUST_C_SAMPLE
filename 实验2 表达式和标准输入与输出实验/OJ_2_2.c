#include<stdio.h>

int main()
{
	unsigned short input;
	unsigned short  m, n;
	scanf("%x", &input); scanf("%hd", &m); scanf("%hd", &n);
	if (m >= 0 && m <= 15 && n >= 1 && n <= 16 - m)
	{
		input = input>> m;
		input = (unsigned short)(input<<(16-n));
		printf("%x", input);
	}
	else
		printf("error");
	return 0;
}