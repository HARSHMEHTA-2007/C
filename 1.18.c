#include<stdio.h>
int main()
{
     int breath,length,area,perimeter;
    printf("Enter leangth, breath:");
    scanf("%d %d",&length,&breath);
    area = length * breath;
    perimeter = 2 * (length + breath);
    printf("area %d\n perimeter %d\n",area,perimeter);

}
