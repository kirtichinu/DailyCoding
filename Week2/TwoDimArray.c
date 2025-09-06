#include<stdio.h>
int main()
{
    //TWO DIMENTIONAL ARRAYS
    int marks[2][3];

    printf("enter at 0,0 = ");
    scanf("%d",&marks[0][0]);

    printf("enter at 0,1 = ");
    scanf("%d",&marks[0][1]);

    printf("enter at 1,0 = ");
    scanf("%d",&marks[1][0]);

    printf("enter at 1,1 = ");
    scanf("%d",&marks[1][1]);
    
 
    printf(" %d %d\n %d %d",marks[0][0], marks[0][1], marks[1][0], marks[1][1]);
    //similarly we can print any value we want by changing the position of the array in square braces.
    
    return 0;

}