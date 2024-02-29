#include <stdio.h>
#include <stdlib.h>
int sum = 0;
int *smul(int a[],int b[])
{
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        { if (i==j)
             sum += a[i]*b[j];
            else continue;
        }
    }
    return &sum;
}
int main()
{   int a[]= {1,1,1,1},b[]={1,2,3,4};
    int *res = smul(a,b);
    printf("%d",*res);
    return 0;
}
