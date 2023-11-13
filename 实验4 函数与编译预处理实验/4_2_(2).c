#include<stdio.h>
double mulx(double x, int n);
long fac(int n);
double sum(double x, int n)		//ʹ�õݹ��㷨ʹ֮��������С
{
	if (n) return (mulx(x, n) / fac(n))+sum(x,n-1.0);
	else return 1.0;
}
double mulx(double x, int n)
{
	int i;
	double z = 1.0;
	for (i = 0; i < n; i++)
	{
		z = z * x;
	}
	return z;
}
long fac(int n)		//n�Ľ׳�
{
	if (n) return n * fac(n - 1);
	else return 1;
}
int main()
{
	double x;
	int n;
	printf("input x and n:");
	scanf_s("%lf%d", &x, &n);
	printf("the result is %lf:", sum(x, n));
	return 0;
}
