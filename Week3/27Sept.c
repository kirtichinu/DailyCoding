#include<stdio.h>
#define SIZE
#include<stdlib.h>

void insertionSort(int a[SIZE], int n)
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
    int a[SIZE],n,i,x;
    int n=5;
    printf("Sorted array is = ");
    (insertionSort(a,n));
    for(i=0;i<n;i++)
    {
        printf("%d",&a[i]);

    }
    return 0;
}