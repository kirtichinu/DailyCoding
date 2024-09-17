#include <bits/stdc++.h> 
using namespace std;
void ZeroToLast(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr[count++] = 0;
    }
}
int main()
{
    int arr[] = {2,0,0,0,8,5,0,7,6,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    ZeroToLast(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<"\n"<< arr[i];
    }

    return 0;
}