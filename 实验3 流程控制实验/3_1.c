#include <stdio.h>
int main()
{ 
  int i,x,k,flag = 0;
  printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
  while (scanf_s("%d", &x) !=EOF)
  {
      for (i = 2, k = x >> 1; i <= k; i++)
      {
          if (!(x % i))  //!的结合优先级大于%，需要括号
          {   
              flag = 1;
              break;
          }
      }
      if (flag == 1)
          printf("%d是合数", x);    //判断条件flag==1而不是flag=1
      else
          printf("%d不是合数", x);
      flag=0;      //第一次判断结束以后，应该再将判断条件flag归零      
  }
  return 0;
}