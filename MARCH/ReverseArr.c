#include<stdio.h>
#include<stdlib.h>

void revArr(int arr[], int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]= arr[high];
        arr[high]= temp;
        low++;
        high--;
    }
}
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    revArr(arr,n);
    printArr(arr,n);
    return 0;
}