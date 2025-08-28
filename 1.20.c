#include<stdio.h>
int main(){
    int base,height,area;
    printf("Enter base and height");
    scanf("%d %d",&base,&height);
    area = (base*height)/2;
    printf("area of triangle %d\n",area);
}
