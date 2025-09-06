//quick sort in cpp

#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int  partition( int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb +1;
    int end = ub;

    while(start <= end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }

        if(start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

int QuickSort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int loc = partition(arr, lb, ub);
        QuickSort(arr,lb, loc -1);
        QuickSort(arr,loc +1, ub);
    }
}

int main()
{
    int arr[] = {7,6,7,5,1,2,9,15,10};
    int n = sizeof(arr)/ sizeof(arr[0]);

    QuickSort(arr,0, n-1);
    cout<<"Sorted array = "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}