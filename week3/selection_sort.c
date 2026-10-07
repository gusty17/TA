#include <stdio.h>

/* Sorts arr in ascending order.
   Each pass selects the smallest remaining element and places it at the front. */
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[] = {64, 25, 12, 22, 11, 90, 5};
    int n = 7;

    printf("Before sorting: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("After sorting:  ");
    printArray(arr, n);

    return 0;
}
