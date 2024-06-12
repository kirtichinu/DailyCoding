#include <stdio.h>
int main()
{
    int arr[100], size, i, elt, position;

    // enter size of the array

    printf("Enter size = ");
    scanf("%d", &size);
    if (size < 1)
    {
        printf("Please enter a positive num value!");
        return 0;
    }

    // insert elements in the array

    printf("Enter elements = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // position to delete the array

    printf("enter the position to delete = ");
    scanf("%d", &position);

    if (position < 1 || position >= size)
    {
        printf("Invalid position");
    }

    else
    {
        for (i = position; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        // print the deleted array

        printf("array after deletion = \n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}