#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], ceil = -1, key;
    printf("Enter values = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("key is: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= key&& (ceil == -1 || ceil >arr[i]))
        {
            ceil = arr[i];
        }
    }
    printf("ceil of %d is : %d", key, ceil);

    return 0;
}