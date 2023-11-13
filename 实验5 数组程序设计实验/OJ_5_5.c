#include<stdio.h>

void move(int num[], int start, int end)        //从num[start]到num[end]整体右移一位
{
    int a = num[end], b;
    int i = 0;
    while (i < end - start)
    {
        num[end - i] = num[end - i - 1];
        i++;
    }
    num[start] = a;
}

void produce(int num[], int m1, int n1, int m2, int n2)     //数组处理函数
{
    int i = 0, timesc = 1, steps[10];
    //第一步
    steps[1] = m2 - n1 - 1;
    while (timesc <= steps[1])
    {
        move(num, m1, m2 - 1);
        timesc++;
    }
    timesc = 1;
    //第二步
    steps[2] = n2 - m2 + 1;
    while (timesc <= steps[2])
    {
        move(num, m1 + steps[1], n2);
        timesc++;
    }
    timesc = 1;
    //第三步
    steps[3] = n2 - m2 + 1;
    while (timesc <= steps[3])
    {
        move(num,m1,m1+steps[1]+n2-m2);
        timesc++;
    }
}

int main()
{
    int num[30];
    int n, m1, m2, n1, n2, i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &num[i]);
        i++;
    }
    scanf("%d%d%d%d", &m1, &n1, &m2, &n2);
    produce(num, m1, n1, m2, n2);
    i = 0;
    while (i < n)
    {
        printf("%d ", num[i]);
        i++;
    }
    return 0;
}