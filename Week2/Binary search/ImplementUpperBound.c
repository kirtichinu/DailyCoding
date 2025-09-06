#include <stdio.h>
int upperBound(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            // upper bound found:
            return i;
        }
    }
    return n;
}
int main()
{
    int arr[] = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, n, x);
    printf("The upper bound is the index: %d\n", ind);
    return 0;
}