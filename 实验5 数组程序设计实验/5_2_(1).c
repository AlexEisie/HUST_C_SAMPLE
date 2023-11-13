#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
    int a[M], b[M];
    int i, j, k;
    for (i = 0; i < M; i++)	
        a[i] = i + 1;
    for (i = M, j = 0; i > 1; i--)
    {
      
        for (k = 1; k <= N; k++)
            if (++j > i - 1) j = 0;
        b[M - i] = j ? (a[j - 1]) : (a[i - 1]);//如果j为0，则意味着需要去掉的元素为原序列中剩余的最后一个元素，而剩余的元素共有i个，因此放到a[i-1]
        if (j)
            for (k = --j; k < i - 1; k++)
                a[k] = a[k + 1];        //从去掉的位置开始，右边所有剩余元素整体左向移动一个位置
    }
    for (i = 0; i < M - 1; i++)
        printf("%6d", b[i]);
    printf("%6d\n", a[0]);
    return 0;
}