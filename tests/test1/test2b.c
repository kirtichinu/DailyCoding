#include<stdio.h>
#include<stdlib.h>

int searchInArr(int arr[],int l, int r, int key)
{
    while(l<=r)
    {
        int mid= l+(r-l)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[l] <= arr[mid])
        {
            if(key >= arr[l] && key < arr[mid])
            {
                r = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(key > arr[mid] && key <= arr[r])
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

    }
    return -1;
}
int main()
{
   /* int arr;
    int n= sizeof(arr)/sizeof(arr[0]);
    
    printf("Enter elts:\n");
    for(int i=0;i<n;i++)
    {
        printf(":  ");
        scanf("%d",&arr[i]);
    }
        */

        
        int n=9;
        int arr[] ={5,6,7,8,9,10,1,2,3};
        int l=0;
        int r= n-1;
        int key;
        printf("Enter key: ");
        scanf("%d",&key);
        int result= searchInArr(arr,l,r,key);
        if(result == -1)
        {
            printf("Not found");
        }
        else{
            printf("Found");
        }
        return 0;

}