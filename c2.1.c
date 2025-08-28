#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
    printf("largest number=%d\n",a);
    printf("smallest number=%d\n",b);
    }

    else if (b>a)
   {

    printf("largest number=%d\n",b);
    printf("smallest number=%d\n",a);
   }
   else {
    printf("both number are equals:%d\n",a);
   }
}
