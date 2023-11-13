//运行到第10行的时候发现c为1，因此发现c赋值区域有误

#include <stdio.h>
int main()
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("输入若干行文本，行首输入Ctrl+z结束。\n");
    while ((c = getchar()) != EOF)      //加上括号，让c先赋值再判断
    {
        numchar++;
        if (c == '\n')
            numline++;
    }
    printf("字符数:%d,", numchar++);
    printf("行数:%d\n", numline);
    return 0;
}
