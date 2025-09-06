// Insertion Sorting

#include <stdio.h>
void insert_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n+1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
        
    } 
    printf("sorted arr = \n");
    for (i = 0; i < n; i++)
    {
       
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("before sort = \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    insert_sort(arr, n);
    return 0;
}