/*Write a code that takes 2 numbers and print the arithmetical, logical and bitwise operations.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;
    printf("please enter the first number:");
    scanf("%d",& num1);
    printf("please enter the second  number:");
    scanf("%d",& num2);
    printf("The Arithmetical Operations:\n");
    printf("Sum:%d + %d = %d\n",num1,num2,num1+num2);
    printf("Sub:%d - %d = %d\n",num1,num2,num1-num2);
    printf("Mul:%d * %d = %d\n",num1,num2,num1*num2);
    printf("Div:%d / %d = %d\n",num1,num2,num1/num2);
    printf("Mod:%d %% %d = %d\n",num1,num2,num1%num2);
    printf("The Logical Operations:\n");
    printf("And:%d && %d = %d\n",num1,num2,num1&&num2);
    printf("OR:%d || %d = %d\n",num1,num2,num1||num2);
    printf("Not: !%d  = %d\n",num1, !num1);
    printf("The Bitwise Operations\n");
    printf("And:%d & %d = %d\n",num1,num2,num1&num2);
    printf("OR: %d | %d = %d\n",num1,num2,num1|num2);
    printf("XOR:%d ^ %d = %d\n",num1,num2,num1^num2);
    printf("shift left: %d << 1 = %d\n",num1,num1<<1);
    printf("shift right:%d >> 2 = %d\n",num1,num1>>2);
    printf("Not: ~%d = %d",num1,~num1);
    return 0;
}
