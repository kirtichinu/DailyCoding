#include <stdio.h>
int SearchInsertPosition(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int ind = SearchInsertPosition(arr, n, x);
    printf("The index is = %d\n",ind);
    return 0;
}