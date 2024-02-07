#include <stdio.h>
#include <stdlib.h>

int main()
{   int grade ;
    printf("enter your grade:");
    scanf("%d",&grade);
    if(grade>=85)
        printf("excellent");
    else if (grade>=75)
        printf("very good");
    else if (grade>=65)
        printf("good");
    else if (grade>=50)
        printf("pass");
    else
        printf("fail");

    return 0;
}
