#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], floor, key;
    printf("Enter values = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("key is: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= key)
        {
            floor = arr[i];
        }
    }
    printf("Floor of %d is : %d", key, floor);

    return 0;
}