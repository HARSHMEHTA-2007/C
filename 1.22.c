#include<stdio.h>
int main(){
    float net_sales,gross_sales;
    printf("Enter gross sales:");
    scanf("%f",&gross_sales);
    net_sales = gross_sales - (0.10 * gross_sales);
    printf("net sales%f\n",net_sales);

}
