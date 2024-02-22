#include <stdio.h>
#include <stdlib.h>

int main()
{
	    int num,size;
		printf("Enter size of array:");
		scanf("%d",&size);
		int arr[size];
    printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }
  int n=size-1;

		while(n>0)
	    {
			for(int i=0;i<size-1;i++)
			{
				if(arr[i+1]<arr[i])
				{
					int temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}

			}
			n--;
		}
		printf("second largest element = %d",arr[size-2]);
}
