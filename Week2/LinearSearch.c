//Linear search
#include <stdio.h>
int main()
{
    int arr[100], i, size, key;
    // size
    printf("Enter size = ");
    scanf("%d", &size);

    //input elements
    printf("Enter the elements of array = ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //key
    printf("Enter key = ");
    scanf("%d", &key);

    //traversal
    for(i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            printf("Found %d at position %d", key, i);
        }
    }

    return 0;
}