#include <stdio.h>
int lowbound(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int arr[] = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int index = lowbound(arr, n, x);
    printf("Lower bound is the index = %d\n", index);
    return 0;
}