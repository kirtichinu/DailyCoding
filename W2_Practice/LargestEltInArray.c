#include<stdio.h>
int main()
{
    int arr[]={12,54,94,6,72};
    int i, j, large = arr[0], size= 5;
    for(i=0; i<size; i++)
    {
        if(arr[i]> large)
        {
            large = arr[i];
        }

    }
    printf("Largest elt is %d", large);
    return 0;
}