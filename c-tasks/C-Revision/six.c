#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,ce=0,co=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element in array:",n);
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            ce++;
        else co++;
    }
    printf("Total even elements:%d\n Total odd element:%d",ce,co);
    return 0;
}
