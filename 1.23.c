#include<stdio.h>
int main()
{
    float s1, s2, s3,total,average;
    printf("enter marks of 3 subjects:");
    scanf("%f %f %f",&s1,&s2,&s3);
    total = s1 + s2 + s3;
    average = total /3;
    printf("total %f\n average %f\n",total,average);

}
