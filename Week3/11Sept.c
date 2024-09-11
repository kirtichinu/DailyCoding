// rotate an array by one

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, size = 5, indx;

    printf("Given array = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Enter the index to start from = ");
    scanf("%d", &indx);
    if (0 <= indx && indx >= size - 1)
    {
        printf("Invalid Index!");
    }
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + indx) % size] = arr[i];
    }

    printf("Rotated array = ");
    for (int i = 0; i < size; i++)
    {

        printf("%d", temp[i]);
    }
    return 0;
}