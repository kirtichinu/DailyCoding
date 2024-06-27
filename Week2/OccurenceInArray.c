#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], key, first = -1, last = -1;
    printf("Enter values = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("key is: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
        if (first != -1)
        {
            printf("First occurence is at position %d\n", first);
            printf("Last occurence is at position %d", last);
        }
        else
        {
            printf("%d not found in the given array",key);
        }
    
    return 0;
}