#include <stdio.h>
long long sum_fac(int n);

int main(void)
{
    int k,i;
    long long sum = 0;
    for (sum = 0, k = 1; k <= 20; k++)
    {
        for (sum = 0, i = 1; i <= k; i++)
            sum += sum_fac(i);
        printf("k=%d\tthe sum is %lld\n", k, sum);
    }
    return 0;
}
long long sum_fac(int n)
{
    if (n) return n * sum_fac(n - 1);       //递归调用
    else return 1;      //最终n到0时为1结束
}