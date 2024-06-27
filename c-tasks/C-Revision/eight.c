#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,min,max;

printf("Enter size of array:");
scanf("%d",&n);
int arr[n];
 printf("enter %d element in array :",n);
   for(int i=0;i<n;i++)
   {

       scanf("%d",&arr[i]);

   }

    find(arr,n,&min,&max);
     printf("Min:%d , Max:%d",min,max);
    return 0;
}
 void find(int arr[],int n,int *min,int *max)
{  *min=arr[0];
   *max=arr[0];
     for(int i=1;i<n;i++)
     {
         if(arr[i]<*min)
            *min=arr[i];
         if(arr[i]>*max)
            *max=arr[i];
     }

}
