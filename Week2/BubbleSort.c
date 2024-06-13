#include <stdio.h>
int main()
{
    int arr[100], i, j, size, position, temp = 0;

    // size
    printf("enter size = ");
    scanf("%d", &size);
    if (size < 1)
    {
        printf("Invalid size !");
        return 0;
    }

    // insert elements
    printf("Enter element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // check for ascending
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //print the sorted array

    printf("The sorted array = ");
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }

    
    return 0;
}