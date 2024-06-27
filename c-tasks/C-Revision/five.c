#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[4];
   for(int i=0;i<4;i++)
   {
       printf("enter the element number %d:",i+1);
       scanf("%d",&arr[i]);

   }
    find(arr);
    return 0;
}
void find(int arr[])
{ int min=arr[0];
  int max=arr[0];
     for(int i=1;i<4;i++)
     {
         if(arr[i]<min)
            min=arr[i];
         if(arr[i]>max)
            max=arr[i];
     }
     printf("Min:%d , Max:%d",min,max);
}
