#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* find(char* input[], int n)
{
	int i = 0;
	static char* result;
	int length = 0;
	while (i < n)
	{
		if (strlen(input[i]) > length)
		{
			length = strlen(input[i]);
			result = input[i];
		}
		i++;
	}
	return result;
}

int main()
{
	char* input[100];
	int i = 0;
	char temp[100];
	scanf("%s", temp);
	input[i] = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
	strcpy(input[i], temp);
	i++;
	while (getchar()!='\n')
	{
		scanf("%s", temp);
		input[i] = (char*)malloc(sizeof(char) * (strlen(temp) + 1));
		strcpy(input[i], temp);
		i++;
	}
	char* result;
	result = find(input, i);
	printf("%s %d", result, strlen(result));
	return 0;
}