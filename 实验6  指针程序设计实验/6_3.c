/*
   单步执行。进入strcpy时watch窗口中s为何值？返回main时, watch窗口中s为何值？    进入时s为未被赋初值的数组，返回时s为there is a boat on the lake
*/
#include "stdio.h"

char* strcpy(char*, char*);
void main(void)
{
    char a[40], b[60] = "there is a boat on the lake.";
    strcpy(a, b);       //先进行拷贝，然后输出a
    printf("%s\n",a);

}
char* strcpy(char* s, char* t)
{
    while (*s++ = *t++);
    return (s);
}
