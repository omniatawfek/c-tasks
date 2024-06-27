#include <stdio.h>
#include <stdlib.h>

int main()
{   int y;
    printf("Enter Year:");
    scanf("%d",&y);
    if(y%400==0)
        printf("Leap Year");
    if(y%4==0&&y%100!=0)
         printf("Leap Year");
    else  printf("Not Leap Year");
    return 0;
}
