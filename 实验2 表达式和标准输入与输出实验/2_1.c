/*	（1）	执行完c = 5 / 9 * (f - 32)，c的值为多少？	c为0
	（2）	执行完scanf(“ % f”, &r)，r的值为多少？	输入3后，r的值变为-9.2559604425286806e+61
	（3）	执行完newint = p & 0xff00 | k >> 8， newint的值是多少？表达式k >> 8的值是多少？		newint为95,k>>8为-95
*/

#include<stdio.h>
#define PI 3.14159		//define语句末尾不加分号
#pragma warning(disable : 4996)

int main(void)
{
	int f;
	short p, k;
	double c, r, s;

	/* 任务1 */
	printf("Input Fahrenheit: ");
	scanf("%d", &f);				//f缺少地址符scanf无法为f赋值
	c = 5.0 / 9.0 * (f - 32);			//5/9会被当作int型处理，导致结果为0
	printf("\n %d(F) = %.2f (C)\n\n", f, c);

	/* 任务2 */
	printf("input the radius r:");
	scanf("%lf", &r);		//double型的变量使用lf
	s = PI * r * r;
	printf("\nThe acreage is %.2lf\n\n", s); //printf的参数s直接输入即可，不需要加地址符

	/* 任务3 */
	k = 0xa1b2, p = 0x8432;
	short newint;					//下一行的newint变量没有提前声明
	newint = p & 0xff00 | ((k >> 8) & 0xff);		//newint赋值有误
	return 0;
}
