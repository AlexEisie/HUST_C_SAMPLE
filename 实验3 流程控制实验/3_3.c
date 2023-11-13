#include<stdio.h>

int main()
{
  int lv;
  double x,tax=0.00;
  printf("输入工资(x):\n");
  scanf_s("%lf",&x);
  if(x<1000)         lv=0;
  if(x>=1000&&x<2000)lv=1;
  if(x>=2000&&x<3000)lv=2;
  if(x>=3000&&x<4000)lv=3;
  if(x>=4000&&x<5000)lv=4;
  if(x>=5000)        lv=5;
  switch(lv)
  {
    case 1:
      tax=(x-1000)*0.05;
      break;
    case 2:
      tax=1000*0.05+(x-2000)*0.10;
      break;
    case 3:
      tax=1000*0.05+1000*0.10+(x-3000)*0.15;
      break;
    case 4:
      tax=1000*0.05+1000*0.10+1000*0.15+(x-4000)*0.20;
      break;
    case 5:
      tax=1000*0.05+1000*0.10+1000*0.15+1000*0.20+(x-5000)*0.25;
      break;
  }
  printf("应缴税为：%.2lf",tax);
  return 0;
}