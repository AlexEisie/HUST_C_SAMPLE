#include <math.h>
#include <stdio.h>
int main()
{
    long x, y;
    for (int i = 1; i < 100000; i++)        //iδ���壬int i
    {
        x = sqrt(i + 100);
        y = sqrt(i + 268);
        if ((x* x == i + 100) && (y * y == i + 268))        //��������ж�������Ҫ��������
            printf("\n%d", i);
    }
    return 0;
}
