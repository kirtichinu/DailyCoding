#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 14};
    int size = 5;
    int i;
    for (i = 0; i < size - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            printf("Not sorted!");
            return 0;
        }
    }
    printf("sorted!");
    return 0;
}