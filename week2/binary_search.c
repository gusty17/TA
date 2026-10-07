#include <stdio.h>

/* Array MUST be sorted in ascending order.
   Returns the index of target in arr, or -1 if not found. */
int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int arr[] = {5, 11, 12, 22, 25, 64, 90}; /* sorted */
    int n = 7;
    int target;

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter number to search for: ");
    scanf("%d", &target);

    int index = binarySearch(arr, n, target);

    if (index != -1)
        printf("%d found at index %d\n", target, index);
    else
        printf("%d not found in the array\n", target);

    return 0;
}
