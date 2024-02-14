/* write a c code containing a function that gets the fibonacci of a given number */

#include <stdio.h>

void fibonacci(int) ;

int main()
{   int n ;
    printf("enter a number:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
  int a =0,b=1;
  for(int i=1;i<=n;i++)
  {
      printf("%d ",a);
      int result=a+b;
      a=b;
      b=result;
  }
}
