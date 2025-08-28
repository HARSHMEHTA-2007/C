#include<stdio.h>
int main()
{
    int  celsius,fahrenheit;
    printf("Enter fahrenheit:");
    scanf("%d",&fahrenheit);
    celsius = (5.0/9) * (fahrenheit - 32);
    printf("celsius %d\n",celsius);
}
