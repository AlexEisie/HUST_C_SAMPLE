#include <stdio.h>
int main()
{ 
  int i, x=100, k, flag = 0;
  printf("三位数的纯粹合数有：\n");
  while (x<=999) {        //x遍布100－999
  for(i=2,k=x>>1;i<=k;i++)      
    if (!(x%i)) {
        for(i=2;i<=(x/10)-1;i++)
        {
          if(!((x/10)%i))
          {
            for(i=2;i<=(x/100)-1;i++)
            {
              if(!((x/100)%i))
              {
                flag=1;
                break;
              }
            }
            break;
          }
        }
      break;
      }
  if(flag==1) printf("%d ", x);
  flag=0;   
  x++;
  }
  return 0;
}