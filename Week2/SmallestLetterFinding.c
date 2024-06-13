#include <stdio.h>
int main()
{
    int lettersize, i;
    char letters[100], target;
    // size
    printf("Enter size = ");
    scanf("%d", &lettersize);

    // Enter Elements
    printf("Enter elements = ");
    for (i = 0; i < lettersize; i++)
    {
        scanf(" %c", &letters[i]);
    }

    // target

    printf("Enter target = ");
    scanf(" %c", &target);
    

    for (i = 0; i < lettersize; i++)
    {
        if (letters[i] > target)
        {
            printf("Output is %c\n", letters[i]);
            return 0;
        }
    }

    return 0;
}