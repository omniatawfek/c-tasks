/* write a c code to ask the user to enter two numbers ,then the main function will call a function named Get_Max
 that takes the two values entered by the user then reternes the maximum of them */


#include <stdio.h>

int Get_Max(int,int);

int main()
{   int num1,num2;
    printf("please enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int max = Get_Max(num1,num2);
    printf("max:%d",max);
    return 0;
}
int Get_Max(int x,int y)
{
    if (x>y) return x ;
    else  return y ;
}
