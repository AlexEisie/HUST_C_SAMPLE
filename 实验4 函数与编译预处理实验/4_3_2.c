/*
    ○2单步执行。进入函数integerl_fraction时，watch窗口中x为何值？在返回main时, watch窗口中i为何值？  x为main函数调用时的s的值,i为x的整数部分
*/

#include<stdio.h>       //需要stdio.h
#include<Assert.h>      //需要assert.h
#define  R
int main(void)
{
    float  r, s;
    int s_integer = 0;
    printf("Input a number: ");
    scanf_s("%f", &r);
#ifdef  R
    s = 3.14159 * r * r;
    printf("Area of round is: %f\n", s);
    if(s- integer_fraction(s)>0.5)
        s_integer = integer_fraction(s+1);
    else
        s_integer = integer_fraction(s);
    assert((s - s_integer) < 0.5);         //assert的检验条件为S与s取整的差
    printf("The integer fraction of area is %d\n", s_integer);
#endif
    return 0;
}

int integer_fraction(double x)
{
    int i = x;
    return i;
}
