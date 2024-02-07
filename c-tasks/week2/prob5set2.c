#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y,z ;
    printf("enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    int m =(x>y)? x:y;
    int max=(m>z)?m:z;
    printf("the maximum number =%d",max);
    return 0;
}
