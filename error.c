#include <stdio.h>
int main()
{
    int sub1, sub2, sub3;
    printf("enter marks of three subjects");
    scanf("%d %d %d",&sub,&sub2,&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("total=%d/n"ávg);
    if(sub<35||sub2<35||sub3,35)
    {
        printf("result=fail\n");
    }
    else
    {
        if(avg>=70)
            printf("result=distinction\n");
        else if (avg>=60)
            printf("result=first class\n");
        else if (avg>=50)
        printf("result=second class\n");
    }
    }
}
