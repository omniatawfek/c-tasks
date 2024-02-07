#include <stdio.h>
#include <stdlib.h>

int main()
{int num;
 float ave ,sum=0;
 for(int i=1;i<=10;i++)
{
    printf("enter a number:");
    scanf("%d",&num);
    sum=sum+num ;
}
    printf("sum:%.1f\n",sum);
    ave = sum/10 ;
    printf("averege:%.1f",ave);
    return 0;
}
