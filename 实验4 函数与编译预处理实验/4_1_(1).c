#include <stdio.h>
long long sum_fac(int n);       //声明

int main(void)
{
    int k;
    for (k = 1; k <= 20; k++)
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    return 0;
}
long long sum_fac(int n)        //long int溢出，换成longlongint
{
    long long s = 0;
    long long i, fac = 1;         //fac初始化为1
    for (i = 1; i <= n; i++)
    {
        fac *= i;
        s += fac;           //将s累加放到循环体中
    }
    return s;
}
