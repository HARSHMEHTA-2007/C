#include<stdio.h>
int main()
{
    float gross, allowance, deducation,netsalary;
    printf("Enter value of gross salary:");
    scanf("%f",&gross);
    allowance = 0.10 * gross;
    deducation = 0.03 * gross;
    netsalary = gross + allowance - deducation;
    printf("net salary%f",netsalary);
}
