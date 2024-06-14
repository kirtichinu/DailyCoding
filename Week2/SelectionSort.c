// SELECTION SORT

#include <stdio.h>

void select_sort(int arr[], int n)

{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("Sorted array = %d \n", arr[i]);
    }
}
int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("before SelSort = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    select_sort(arr, n);
}