#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
    int a[M],b[M];      //Ĭ��a������Ԫ��״̬Ϊ1
    int i, j, k,result,c=0;
    for (i = 0; i < M; i++)
        a[i] = 1;
    for (i = M, j = 0; i > 1; i--)
    {
     
        for (k = 1; k <= N; k++)
        {
            while (!a[j])       //���Ԫ��״̬�Ƿ�Ϊ0,����ǣ�������
                if (++j > M - 1) j = 0;
            if (++j > M-1) j = 0;
        }
        if (j)      //���j��Ϊ0����ֱ����j-1Ϊ0�����j=0��˵��ȥ���˵������һ��״̬Ϊ1��Ԫ�أ�Ҳ����a[M-1]
            a[j - 1] = 0;
        else
            a[M - 1 - c ] = 0;
        b[M - i] = j ? j : M-c++;
    }
    i = 0;
    while (i < M)       //�������״̬Ϊ1��Ԫ�ص�λ��
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