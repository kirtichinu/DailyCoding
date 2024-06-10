#include<stdio.h>
int main()
{
    //TWO DIMENTIONAL ARRAYS
    int marks[2][3];

    marks[0][0] =99;
    marks[0][1] =98;
    marks[0][2] =97;

    marks[1][0] =90;
    marks[1][1] =91;
    marks[1][2] =92;

    printf("%d\n",marks[0][0]);
    //similarly we can print any value we want by changing the position of the array in square braces.
    
    return 0;

}