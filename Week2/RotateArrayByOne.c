#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, index;

    // given array

    printf("Given array = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Index to start from
    printf("Enter the index to start from = ");
    scanf("%d", &index);
    if (0 <= index && index >= size - 1)
    {
        printf("Invalid Index entered!");
    }

    // Rotate the array
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + index) % size] = arr[i];
    }

    printf("Rotated array = ");
    for (int i = 0; i < size; i++)
    {

        printf("%d", temp[i]);
    }
    return 0;
}