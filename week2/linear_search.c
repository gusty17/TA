#include <stdio.h>

/* Returns the index of target in arr, or -1 if not found. */
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main(void)
{
    int arr[] = {64, 25, 12, 22, 11, 90, 5};
    int n = 7;
    int target;

    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter number to search for: ");
    scanf("%d", &target);

    int index = linearSearch(arr, n, target);

    if (index != -1)
        printf("%d found at index %d\n", target, index);
    else
        printf("%d not found in the array\n", target);

    return 0;
}
