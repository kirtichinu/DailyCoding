#include <stdio.h>
int main()
{
    int size = 6, i, j, temp = 0, low, high, mid, key;
    int arr[] = {2, 3, 1, 7, 8, 9};
    // traversal
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print sorted array
    printf("Sorted array = \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // searching
    high = 0;
    low = 5;
    printf("Enter key = ");
    scanf("%d", &key);

    for(i=0; i< size; i++)
    {
        mid= (low+ high)/2;
        if(arr[mid] == key)
        {
            printf("Found %d at position %d", key, mid);
            return 0;
        }

        else if(arr[mid] < key)
        {
            low = mid -1;

        }
        else if(arr[mid] > key)
        {
            high = mid + 1;

        }
        else
        {
            printf("Wrong key entered!");

        }
    }
    return 0;
}