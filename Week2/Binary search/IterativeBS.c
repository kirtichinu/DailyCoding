// Iterative binary search

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size =9;
    int i, mid, high, low, key;
   
   
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