/*
   ����ִ�С�����strcpyʱwatch������sΪ��ֵ������mainʱ, watch������sΪ��ֵ��    ����ʱsΪδ������ֵ�����飬����ʱsΪthere is a boat on the lake
*/
#include "stdio.h"

char* strcpy(char*, char*);
void main(void)
{
    char a[40], b[60] = "there is a boat on the lake.";
    strcpy(a, b);       //�Ƚ��п�����Ȼ�����a
    printf("%s\n",a);

}
char* strcpy(char* s, char* t)
{
    while (*s++ = *t++);
    return (s);
}
