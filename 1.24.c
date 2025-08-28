#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter number:");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("After swap:");
   printf("%d %d",a,b);
   return 0;
}
