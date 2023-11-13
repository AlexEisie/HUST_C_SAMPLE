#include<stdio.h>

int main()
{
	long int input;
	scanf("%d", &input);
	char* p = (char*)&input;
	int i = 0;
	char high, low;
	while (i <=3)
	{
		high = (*(p+3-i) >> 4)&0x0F;		//注意，如果不加&0x0F，会把其他字节的内容放进去导致结果错误。
		low = *(p+3-i) & 0x0F;
		printf("%X%X", high, low);
		i++;
	}
	return 0;
}