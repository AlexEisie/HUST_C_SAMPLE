#include <stdio.h>
int main()
{
    int i, x, k, flag = 0;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf_s("%d", &x) != EOF)
    {
        for (i = 2, k = x >> 1; i <= k; i++)
        {
            if (!(x % i))
            {
                flag = 1;      //for单出口去掉break即可
            }
        }
        if (flag == 1)
            printf("%d是合数", x);
        else
            printf("%d不是合数", x);
        flag = 0;
    }
    return 0;
}