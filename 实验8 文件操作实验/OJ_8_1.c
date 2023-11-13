#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE* in;
	in = fopen("source.txt", "r");
	if (in == NULL)
	{
		printf("error!");
		return 0;
	}
	char old[10];
	char temp[20];
	char new[10];
	scanf("%s%s", old, new);
	char ch;
	int i = 0, count = 0;
	while ((ch = getc(in)) != EOF)
	{
		if (ch != ' ' && ch != '.' && ch != ',' && ch != '!')
		{
			temp[i++] = ch;
		}
		else
		{
			temp[i] = '\0';
			i = 0;
		}
		if (i == 0)
		{
			if (!strcmp(temp, old))
			{
				strcpy(temp, new);
				count++;
			}
		}
	}
	fclose(in);
	in = fopen("source.txt", "r");
	printf("%d\n", count);
	temp[0] = '\0';
	i = 0;
	while ((ch = getc(in)) != EOF)
	{
		if (ch != ' ' && ch != '.' && ch != ',' && ch != '!')
		{
			temp[i++] = ch;
		}
		else
		{
			temp[i] = '\0';
			i = 0;
		}
		if (i == 0)
		{
			if (!strcmp(temp, old))
			{
				strcpy(temp, new);
				count++;
			}
			printf("%s%c", temp,ch);
		}
	}

	/*if (i == 0)
	{
		if (!strcmp(temp, old))
		{
			strcpy(temp, new);
			count++;
		}
		printf("%s ", temp);
	}*/
	temp[i] = '\0';
	printf("%s", temp);
	fclose(in);
	return 0;
}