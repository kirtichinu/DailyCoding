#include <stdio.h>
int main()
{ // Inserting an element in an array

    int arr[100], position, elt, i, size;
    // initial size of the array

    printf("enter size of the array = ");
    scanf("%d", &size);
    // input elements in an array

    printf("enter elements: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // input the element to be inserted and its position

    printf("enter the element to be  inserted = ");
    scanf("%d", &elt);

    printf("enter position at which element to be inserted = ");
    scanf("%d", &position);

    // ensure that the position is valid

    if (position < 0 || position > size)
    {
        printf("position not valid");
    }
    //dccdxz
    else
    {
        // shift the elements
        for (int i = size; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        // insert a new element at the position

        arr[position] = elt;
        // update arr size
        size++;

        // print updated array
        for (i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}