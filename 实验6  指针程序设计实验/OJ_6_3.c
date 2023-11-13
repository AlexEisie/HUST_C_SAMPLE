#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void produce(char* str[], int n)
{
    int i = 0, j = 0, k = 0;
    char temp1[100];
    while (i < n)
    {
        while (str[i][j] == ' ' || str[i][j] == '\t') j++; //str[i][j]为第一个能用的字符
        strcpy(temp1, &str[i][j]);
        strcpy(str[i], temp1);
        while (j <=strlen(str[i]))
        {
            if (str[i][j] == '\0')
                break;
            while (str[i][j] != ' ') j++;      //寻找空格开始的位置，此时str[i][j]为第一个空格
            k = j++;
            while (str[i][j] == ' ') j++;      //寻找空格结束的位置，此时str[i][j]为第一个可用的字符
            strcpy(temp1, &str[i][j]);
            strcpy(&str[i][k + 1], temp1);
            j = k+1;
        }
        i++;
        j = 0;
    }
}

int main()
{
    int n, i = 0;
    char* str[10];
    char temp[80];
    char str1[100];
    char str2[200];
    str[0] =str1;
    str[1]=str2;
    scanf("%d", &n);
    getchar();
    while (i < n)
    {
        gets(temp);
        strcpy(str[i], temp);
        i++;
    }
    produce(str, n);
    i = 0;
    while (i < n)
    {
        printf("%s", str[i]);
        if (i < n - 1) printf("\n");
        i++;
    }
    return 0;
}