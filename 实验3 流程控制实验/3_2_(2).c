#include <stdio.h>
int main()
{ 
  int i, x, k, flag = 0;
  printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
  while (scanf("%d", &x) !=EOF) {
    i=1;
    k=x>>1;
    do
    {
      i++;
      if(!(x%i))
      {
        flag=1;
        break;
      }
    }
    while(i<k);    //由于将i++提前了，所以需要把i<=k条件改为i<k,这样最后一次判断实际上才是x%(x-1)
    if(flag==1) printf("%d是合数", x);
    else printf("%d不是合数", x);
    flag=0;
  }
  return 0;
}