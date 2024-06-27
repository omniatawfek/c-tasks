#include <stdio.h>
#include <stdlib.h>

int main()
{  int num,c=0;
    printf("Enter number to find sum of its digit:");
    scanf("%d",&num);
    while(num!=0)
    {
        c+=num%10;
        num=num/10;
    }
    printf("sum of digit=%d",c);
    return 0;
}
