/*
    ��2����ִ�С����뺯��integerl_fractionʱ��watch������xΪ��ֵ���ڷ���mainʱ, watch������iΪ��ֵ��  xΪmain��������ʱ��s��ֵ,iΪx����������
*/

#include<stdio.h>       //��Ҫstdio.h
#include<Assert.h>      //��Ҫassert.h
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
    assert((s - s_integer) < 0.5);         //assert�ļ�������ΪS��sȡ���Ĳ�
    printf("The integer fraction of area is %d\n", s_integer);
#endif
    return 0;
}

int integer_fraction(double x)
{
    int i = x;
    return i;
}
