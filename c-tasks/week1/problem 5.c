/*Write a code that scans 3 numbers from the user and prints them in reversed order.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("please enter the first number:");
    scanf("%d",& n1);
    printf("please enter the second number:");
    scanf("%d",& n2);
    printf("please enter the third number:");
    scanf("%d",& n3);
    printf("the numbers after reversed :%d\n%d\n%d\n",n3,n2,n1);
    return 0;
}
