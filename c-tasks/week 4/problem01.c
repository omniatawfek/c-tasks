#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Ascending(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
void Descending(int arr[], int n) {
    int i, j, max;
    for (i = 0; i < n-1; i++) {
        max = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        swap(&arr[max], &arr[i]);
    }
}

int main() {
    int n,choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter 0 for ascending or 1 for descending: ");
    scanf("%d", &choice);

    if (choice == 0) {
        Ascending(arr, n);
        printf("ascending order: ");
    } else if (choice == 1) {
        Descending(arr, n);
        printf("descending order: ");
    } else {
        printf("wrong number.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
