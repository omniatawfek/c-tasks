#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5][5],rsum=0,csum=0;
    for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        printf("enter the element no[%d][%d]:",i,j);
        scanf("%d",&arr[i][j]);
    }
}
 printf("row sums:");

  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          rsum+=arr[i][j];
      }
      printf("%d ",rsum);
      rsum=0;
 }
  printf("\n");
   printf("column sum:");
   for(int j=0;j<5;j++)
   {
       for(int i=0;i<5;i++)
       {
           csum+=arr[i][j];
       }
        printf("%d ",csum);
        csum=0;
   }
    return 0;
}
