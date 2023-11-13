#include <stdio.h> 
int max(int x, int y, int z);
float sum(float x, float y);		//声明

int main(void)
{
	int a, b, c;
	float d, e;
	printf("Input three integers:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("\nThe maximum of them is %d\n", max(a, b, c));

	printf("Input two floating point numbers:");
	scanf_s("%f %f", &d, &e);
	printf("\nThe sum of them is  %f\n", sum(d, e));
	return 0;
}

int max(int x, int y, int z)
{
	int m = z;
	if (x > y)
	{
		if (x > z) m = x;
	}		//else语句应该对应第一个if
	else
		if (y > z) m = y;
	return m;
}

float sum(float x, float y)
{
	return x + y;
}