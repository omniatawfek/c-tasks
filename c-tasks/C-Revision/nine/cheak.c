#include <stdio.h>
#include <stdlib.h>

int main()
{ int num,n;

    printf("enter the number:");
    scanf("%d",&num);
     printf("enter nth bit to cheak (0-31):");
    scanf("%d",&n);
   if(num & (1 << n))
{printf("the %d bit is set to 1",n);
}
   else printf("the %d bit is set to 0",n);

    return 0;

}
