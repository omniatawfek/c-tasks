#include <stdio.h>
#include <stdlib.h>
  int add(int *x,int *y)
{
    return *x+*y ;
}

int main()
{   int x,y;
    printf("enter two values:");
    scanf("%d %d",&x,&y);
    int sum = add(&x,&y);
    printf("%d",sum);
    return 0;
}

