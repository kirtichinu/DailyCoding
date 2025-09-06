//inserting elt in arr

#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int position, elt, i, size;

    printf("enter size of the array = ");

    scanf("%d", &size);
    if (size <= 0)
    {
        printf("not valid size\n");
        return 0;
    }
    printf("enter elements: \n", size);
    int arr[size + 1];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the elements = ");
    scanf("%d", &elt);

    printf("enter position = ");
    scanf("%d", &position);

    if (position < 1 || position >= size)
    {
        printf("position not valid");
    }
    else
    {
        printArray(arr, size);

        for (i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = elt;

        size++;

        printArray(arr, size);

        printf("\n");
    }
    return 0;
}