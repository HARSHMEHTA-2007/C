#include<stdio.h>
int main()
{
   int length, area, perimeter;
    printf("Enter side length:");
    scanf("%d",&length);
    area=length * length;
    perimeter=4 * length;
    printf("area %d\n perimeter %d\n",area,perimeter);

}
