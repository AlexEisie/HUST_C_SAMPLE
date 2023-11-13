/*
1）	跟踪进入strcate时，观察字符数组t和s中的内容：s的内容是” Language”, t的内容是” Programming”，最终的结果不正确
2）	跟踪进入strcate, 当单步执行光条刚落在第二个while语句所在行时：i的值为12, t[i] = ’\0’;
3）	当单步执行光条落在strcate函数块结束标记即右花括号“}”所在行时，字符数组t和s分别为何值？分析是否实现了字符串连接：t为” Programming”, s为”Language”，但是连接的位置有误。
4）	跟踪进入函数strdelc时，观察字符数组s中的内容和字符c的值：s的内容为” Programming”，c为’a’，最终结果有误
5）	单步执行for语句过程中：s每遇到一次’a’，都会将下一个元素的字符复制到’a’所在的位置上，j从0到11，k每遇到一次非’a’的值加一，从0到10
*/

#include<stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main(void)
{
	char a[50] = "Language", b[50] = "Programming";		//由于需要对a所占的空间进行补充，为了防止溢出，给a额外的空间
	printf("%s %s\n", b, a);
	strcate(b, a);	printf("%s %s\n", b, a);
	strdelc(b, 'a');	printf("%s\n", b);
	return 0;
}
void strcate(char t[], char s[])
{
	int i = 0, j = 0;
	while (t[i++]);
	t--;	//从t的末尾\0开始，而不是末尾+1;
	while ((t[i++] = s[j++]) != '\0');
}
void strdelc(char s[], char c)
{
	int j, k;
	for (j = k = 0; s[j] != '\0'; j++)
		if (s[j] != c)	s[k++] = s[j];
	s[k] = '\0';		//为修改后的s末尾添上\0
}
