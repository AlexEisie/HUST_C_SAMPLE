#include <stdio.h>
long long sum_fac(int n);       //����

int main(void)
{
    int k;
    for (k = 1; k <= 20; k++)
        printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
    return 0;
}
long long sum_fac(int n)        //long int���������longlongint
{
    long long s = 0;
    long long i, fac = 1;         //fac��ʼ��Ϊ1
    for (i = 1; i <= n; i++)
    {
        fac *= i;
        s += fac;           //��s�ۼӷŵ�ѭ������
    }
    return s;
}
