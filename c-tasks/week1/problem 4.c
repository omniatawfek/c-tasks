/* writing a code printing the result. (x = 7, y = 4), (x | y), (x & y), (x ^ y), (x << 1), (x >> 2). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7, y = 4 ;   // 7 = 0000 0111 ,  4 = 0000 0100
    printf("x | y = %d\n",x|y);  // 0000 0111 = 7
    printf("x & y = %d\n",x&y);  // 0000 0100 = 4
    printf("x ^ y = %d\n",x^y);  // 0000 0011 = 3
    printf("x << 1 = %d\n",x<<1); // 7*2=14
    printf("x >> 2 = %d\n",x>>2); // 7/4=1
    return 0;
}
