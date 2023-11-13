#include <stdio.h>

int main(int argc, char* str[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}