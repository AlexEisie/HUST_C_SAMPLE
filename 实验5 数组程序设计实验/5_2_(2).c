#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
    int a[M],b[M];      //默认a中所有元素状态为1
    int i, j, k,result,c=0;
    for (i = 0; i < M; i++)
        a[i] = 1;
    for (i = M, j = 0; i > 1; i--)
    {
     
        for (k = 1; k <= N; k++)
        {
            while (!a[j])       //检查元素状态是否为0,如果是，就跳过
                if (++j > M - 1) j = 0;
            if (++j > M-1) j = 0;
        }
        if (j)      //如果j不为0，则直接让j-1为0，如果j=0，说明去除了的是最后一个状态为1的元素，也就是a[M-1]
            a[j - 1] = 0;
        else
            a[M - 1 - c ] = 0;
        b[M - i] = j ? j : M-c++;
    }
    i = 0;
    while (i < M)       //查找最后状态为1的元素的位置
    {
        if (a[i]) result = i + 1;
        i++;
    }
    for (i = 0; i < M - 1; i++)	
         printf("%6d", b[i]);
    printf("%6d\n", a[0]);
    printf("%6d\n",result);
    return 0;
}