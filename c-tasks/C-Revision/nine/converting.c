#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,q,c=0,w=1;
    printf("Enter a binary number:");
    scanf("%d",&num);
    q=num;
    while(q != 0)
    {
        int l=q%10;
        c+=l*w;
        w*=2;
        q/=10;
    }
    printf("%d in binary=%d in decimal",num,c);
    return 0;
}
