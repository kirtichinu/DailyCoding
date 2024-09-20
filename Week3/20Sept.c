//decimal to binary conversion

#include<stdio.h>

void decTobin(int n)
{
    int arr[32];
    int i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }

    for(int j= i-1; j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}

int main()
{
    int n=10;
    decTobin(n);
    return 0;
}