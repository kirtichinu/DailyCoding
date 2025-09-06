#include <stdio.h>

int main()
{
    int n, arr[20], key, count = 0;

    printf("Enter size = ");
    scanf("%d", &n);

    printf("Enter elts of array = ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("key is: ");
    scanf("%d", &key);

    for (int i = 0; i <=n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    printf("count = %d", count);

    return 0;
}