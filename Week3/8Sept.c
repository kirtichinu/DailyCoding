#include <stdio.h>
int main()
{
    int arr[100], size, i, elt, position;

    printf("Enter size = ");
    scanf("%d", &size);
    if (size < 1)
    {
        printf("enter a positive integer!");
        return 0;
    }

    printf("Enter elts = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter position to delete = ");
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

        printf("array after deletion = \n");
        for (i = 0; i < size; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}