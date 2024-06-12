#include<stdio.h>
int main()
{

    int arr[100], size, position, i, elt;
    //size
    printf("enter size = ");
    scanf("%d", &size);

    if(size < 1)
    {
        printf("invalid size !");
        return 0;
    }
    //elements input
    printf("Enter elements of array = \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //enter elt to be replaced
    printf("enter elt to put in = ");
    scanf("%d", &elt);

    //enter position to replace elt
    printf("psition of elt = ");
    scanf("%d", &position);

if(position <0 || position>=size)
{
    printf("Invalid position ! ");
}
else
{
    arr[position ]= elt;

    //print new array
    printf("new arr = \n");
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);

    }
    return 0;
}

}