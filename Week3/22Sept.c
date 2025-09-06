#include<stdio.h>
int isPowerOfThree(int n)
{
    if(n<= 0)
    {
        return 0;
    }
    while(n % 3 == 0)
    {
        n= n/3;
    }
    return n==1;
}

int main()
{
    int n=81;
    int result = isPowerOfThree(n);
    printf("%d as power of three : ", n);
    result == 1 ? printf("Yes") : printf("No");
    return 0;
}