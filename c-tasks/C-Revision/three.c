#include <stdio.h>
#include <stdlib.h>

int main()
{   char op;double m,n;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c", &op);
    printf("Enter Two Operands:");
    scanf("%lf %lf", &m,&n);
    switch(op)
    {
        case'+': printf("%.2lf + %.2lf =%.2lf ",m,n,m+n); break;
        case'-':  printf("%.2lf - %.2lf =%.2lf",m,n,m-n); break;
        case'*': printf("%.2lf * %.2lf =%.2lf ",m,n,m*n); break;
        case'/': if(n!=0)
            printf("%.2lf / %.2lf =%.2lf ",m,n,m/n);
            else printf("Error! Devision by zero");
             break;
        default: printf("Error");
    }

    return 0;
}
