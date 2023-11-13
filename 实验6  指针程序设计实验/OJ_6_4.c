#include<stdio.h>
#include<stdlib.h>

void task0(){printf("task0 is called!\n");}
void task1(){printf("task1 is called!\n");}
void task2(){printf("task2 is called!\n");}
void task3(){printf("task3 is called!\n");}
void task4(){printf("task4 is called!\n");}
void task5(){printf("task5 is called!\n");}
void task6(){printf("task6 is called!\n");}
void task7(){printf("task7 is called!\n");}
void (*p[8])() = {task0,task1,task2,task3,task4,task5,task6,task7};

void execute(char result[],int n)
{
	int i = 0;
	while (i < n)
	{
		p[result[i++] - '0']();
	}
}

void scheduler()		//i为任务的个数,input[i]为'\n'
{
	char input[30];
	gets(input);
	execute(input, strlen(input));
}

int main()
{
	scheduler();
	return 0;
}