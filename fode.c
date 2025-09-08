#include<stdio.h>
int main()
 {
     int arr[5],i,j,n,temp;
     printf("enter five values" );
     for (i=0;i<=4;i++)
        scanf("%d", &arr[i]);

     for (i=0;i<n-1;j++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap elements
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }
     for (i=0;i<=4;i++)
        printf("%d",arr[i]);

 }
