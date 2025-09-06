//find the smallest letter in c

#include <stdio.h>
int main()
{
    int lettersize, i;
    char letters[100], key;

    printf("Enter size = ");
    scanf("%d", &lettersize);

    printf("Enter elements = ");
    for (i = 0; i < lettersize; i++)
    {
        scanf(" %c", &letters[i]);
    }

    printf("Enter key = ");
    scanf(" %c", &key);
    

    for (i = 0; i < lettersize; i++)
    {
        if (letters[i] > key)
        {
            printf("Output is %c\n", letters[i]);
            return 0;
        }
    }

    return 0;
}