//���е���10�е�ʱ����cΪ1����˷���c��ֵ��������

#include <stdio.h>
int main()
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("�����������ı�����������Ctrl+z������\n");
    while ((c = getchar()) != EOF)      //�������ţ���c�ȸ�ֵ���ж�
    {
        numchar++;
        if (c == '\n')
            numline++;
    }
    printf("�ַ���:%d,", numchar++);
    printf("����:%d\n", numline);
    return 0;
}
