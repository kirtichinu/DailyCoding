#include<stdio.h>
#define SIZE 5
#include<stdlib.h>

void insertionSort(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1; j>=0;j--)
        {
            if(temp<a[j])
                a[j+1]= a[j];

            else
                break;
        }
        a[j+1] =temp;
    }
}
int main()
{
    int a[5]={12,56,2,34,1};
    int n=SIZE,i;
    printf("Sorted array is = ");
    (insertionSort(a,n));
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    return 0;
}