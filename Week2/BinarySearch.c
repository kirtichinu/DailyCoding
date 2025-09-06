// Binary Search

#include <stdio.h>
int main()
{
    int arr[100], size, i, mid, high, low, key;
    // size
    printf("Enter size = ");
    scanf("%d", &size);

    // Enter Elements
    printf("Enter elements = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // key

    printf("Enter key= ");
    scanf("%d", &key);

    // define mid

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Found key %d at position %d of the given array", key, mid);
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}