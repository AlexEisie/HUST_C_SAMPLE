#include <stdio.h>

int isperfect(int x)
{
    int y, s;
    for (s = 0, y = 1; y <= x / 2; y++)     //判断时判断条件有误，<改为<=
    {
        if (!(x % y))
            s += y;
    }
    if (s == x)
        return 1;
    return 0;
}

int main()
{
    int a;
    printf("1000内的完数有：");
    for (a = 1; a <= 1000; a++)
        if (isPerfect(a))
            printf("%8d", a);
    return 0;

}
