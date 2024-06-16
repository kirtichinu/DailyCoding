#include <stdio.h>
int binarySearchRecursive(int arr[], int left, int right, int key)
{
    if(left <= right)
    {
        int mid= (left+right)/2;
        if(arr[mid]== key)
        return mid;
        else if(arr[mid]< key)
        return binarySearchRecursive(arr,mid+1,right, key);
        else
        return binarySearchRecursive(arr, left, mid-1, key);
    }
    return -1; // key not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binarySearchRecursive(arr, 0, size - 1, key);
    if(result != -1)
    {
        printf("element found at index %d",result);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}