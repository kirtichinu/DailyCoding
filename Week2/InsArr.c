#include<stdio.h>
int main()
{
    int  size, i, position;
    printf("enter size ( positive integer only ) = ");
    scanf("%d", &size);

    int arr[size];
    
    printf("enter the elements = ");
    for(i=1; i<=size; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<size; i++)
    {
        printf("%d  \n", arr[i]);
    }
    printf("enter position to print elt = ");
    scanf("%d", &position);
    if(position <1 || position >size){
        printf("this array position does not exist in the array");
    }
    else
    {
    printf("pos= %d", arr[position-1]);
    }
    return 0;


}