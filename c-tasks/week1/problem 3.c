/*Write a program that asks the user to enter a dollars and cents amount, then display the amount with 5% tax added:
INPUT: Enter an amount: 100.00 OUTPUT: With tax added : $ 105.00 */


#include <stdio.h>
#include <stdlib.h>

int main()

{
    float amount ;
    printf("please enter the amount :");
    scanf("%f",& amount);
    amount = amount + .05*amount ;
    printf("the amount after tax added:%.2f",amount);
    return 0;
}
