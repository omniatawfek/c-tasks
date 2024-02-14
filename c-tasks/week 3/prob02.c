/* write a c code to swap two global variables through a function */
#include <stdio.h>

int x = 5 , y = 6 ;

void swap(int x,int y)
{
    int z = x;
    x = y;
    y = z;
    printf("x=%d , y=%d",x,y);
}
int main()
{
   swap(x,y);
    return 0;
}
