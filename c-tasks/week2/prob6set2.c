#include <stdio.h>
#include <stdlib.h>

int main()
{   int r ;
do
{
    printf("enter the result of 3*4:");
    scanf("%d",&r);
    if(r==12)
        printf("thanks");
    else
        printf("try again\n");
} while(r!=12);
    return 0;
}
