#include<stdio.h>
int main()
{
    int principal, rate, time, intrest;
    printf("Enter the principal, rate, time:");
    scanf("%d %d %d",&principal, &rate ,&time);
    intrest=(principal * rate * time )/100;
    printf("intrest %d\n",intrest);
}
