#include <stdio.h>
#include <stdlib.h>

void repeat(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    int j;
    for(j=0; j<i; j++)
      {
        if(arr[i] == arr[j])
          break;
      }
    if(i != j)
       printf("The repeating number is: %d", arr[i]);
  }

}
int main()
{
  int size;
  printf("Enter number of elements in the Array: ");
  scanf("%d", &size);

  printf("Enter elements in the Array: ");
  int x[size];
  for(int i = 0; i<size; i++)
    {
      printf("Element %d: ", (i+1));
      scanf("%d", &x[i]);
    }

  repeat(x, size);

  return 0;
}
