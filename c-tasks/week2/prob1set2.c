#include <stdio.h>
#include <stdlib.h>

int main()
{ int w,s;
    printf("enter the working hours:");
    scanf("%d",&w);
    if(w<40)
    {
     s=w*50-.1*50*w ;
     printf("salary=%d",s);
    }
    else
    {
        s=50*w ;
        printf("salary=%d",s);
    }
    return 0;
}
