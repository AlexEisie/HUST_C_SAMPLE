 #include <stdio.h>
 #include<math.h>

 #define s(a,b,c) ((a+b+c)/2)
 #define area(a,b,c) (sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c)))

 int main()
 {
     int a,b,c;
     double s,area;
     scanf("%d%d%d",&a,&b,&c);
     s=s(a,b,c);area=area(a,b,c);
     printf("s=%.2f\narea=%.2f",s,area);
     return 0;
 }