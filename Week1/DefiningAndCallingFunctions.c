#include<stdio.h>

    //function declaration
    int sum(int x, int y);

    //function call
    int main()
    {
        printf("sum is %d",sum(2,3));
    }

    //function definition
    int sum(int x, int y)
    {
        int su = x+y;
        return su;
    }

