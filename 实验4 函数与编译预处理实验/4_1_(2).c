#include<stdio.h>
#define SUM ((a)+(b))
#define DIF ((a)-(b))       //加上括号，否则sum*dif变为a+b*a-b
#define SWAP(a,b)  ((a)+=(b),(b)=(a)-(b),(a)-=(b))      //交换，不是替代
int main()
{
    int a, b;
    printf("Input two integers a, b:");
    scanf_s("%d%d", &a, &b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d", SUM, SUM * DIF);
    SWAP(a, b);
    printf("\nNow a=%d,b=%d\n", a, b);
    return 0;
}
