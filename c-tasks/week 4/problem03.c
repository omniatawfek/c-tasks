#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }

  for(int i=0;i<size;i++)
 	{ int x=0;
       for(int j=i-1;j>=0;j--)
		{
			if(arr[i]==arr[j])
			{
				x++;
				break;
			}

		}
		if(x==0)
		{
			printf("%d ",arr[i]);
		}

	}
}
