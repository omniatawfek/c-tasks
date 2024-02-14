/* write a c code that gets the number of the digits in a given number */

#include <stdio.h>

int num_digit(int);

int main()
{   int num ;
    printf("enter the number:");
    scanf("%d",&num);
    int c = num_digit(num);
    printf("number of digits = %d",c);
    return 0;
}
int num_digit(int num)
{    int c = 0 ;
    while(num!=0)
    {
        num/=10;
        c++ ;
    }
  return c ;
}
