/*
1��	���ٽ���strcateʱ���۲��ַ�����t��s�е����ݣ�s�������ǡ� Language��, t�������ǡ� Programming�������յĽ������ȷ
2��	���ٽ���strcate, ������ִ�й��������ڵڶ���while���������ʱ��i��ֵΪ12, t[i] = ��\0��;
3��	������ִ�й�������strcate�����������Ǽ��һ����š�}��������ʱ���ַ�����t��s�ֱ�Ϊ��ֵ�������Ƿ�ʵ�����ַ������ӣ�tΪ�� Programming��, sΪ��Language�����������ӵ�λ������
4��	���ٽ��뺯��strdelcʱ���۲��ַ�����s�е����ݺ��ַ�c��ֵ��s������Ϊ�� Programming����cΪ��a�������ս������
5��	����ִ��for�������У�sÿ����һ�Ρ�a�������Ὣ��һ��Ԫ�ص��ַ����Ƶ���a�����ڵ�λ���ϣ�j��0��11��kÿ����һ�ηǡ�a����ֵ��һ����0��10
*/

#include<stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main(void)
{
	char a[50] = "Language", b[50] = "Programming";		//������Ҫ��a��ռ�Ŀռ���в��䣬Ϊ�˷�ֹ�������a����Ŀռ�
	printf("%s %s\n", b, a);
	strcate(b, a);	printf("%s %s\n", b, a);
	strdelc(b, 'a');	printf("%s\n", b);
	return 0;
}
void strcate(char t[], char s[])
{
	int i = 0, j = 0;
	while (t[i++]);
	t--;	//��t��ĩβ\0��ʼ��������ĩβ+1;
	while ((t[i++] = s[j++]) != '\0');
}
void strdelc(char s[], char c)
{
	int j, k;
	for (j = k = 0; s[j] != '\0'; j++)
		if (s[j] != c)	s[k++] = s[j];
	s[k] = '\0';		//Ϊ�޸ĺ��sĩβ����\0
}
