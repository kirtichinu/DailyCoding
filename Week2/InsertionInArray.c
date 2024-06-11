#include <stdio.h>

// Function to print the elements of an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d , ", arr[i]);
    }
    printf("\n"); // For better formatting, add a newline after printing all elements
}

int main()
{ // Inserting an element in an array

    int position, elt, i, size;
    // initial size of the array

    printf("enter size of the array = ");

    scanf("%d", &size);
    if (size <= 0)
    {
        printf("not valid chage your size\n");
        return 0;
    }
    // input elements in an array

    printf("enter elements: \n", size);
    int arr[size+1];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // input the element to be inserted and its position

    printf("enter the element to be  inserted = ");
    scanf("%d", &elt);

    printf("enter position at which element to be inserted = ");
    scanf("%d", &position);

    // ensure that the position is valid

    if (position < 1 || position >= size)
    {
        printf("position not valid");
    }
    // dccdxz
    else
    {
         printArray(arr, size);

        // shift the elements
        for (i = size; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

       
        // insert a new element at the position
        arr[position - 1] = elt;
        // update arr size
        size++;

        printArray(arr, size);
        
        

        printf("\n");
    }
    return 0;
}
