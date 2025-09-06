// Remove duplicates

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 2, 3, 5, 6, 6, 7, 8};
    int size = 9;
    if (size == 0)
    {
        return 0;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {

            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }

    printf("New array = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}