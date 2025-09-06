//power of 4

#include<stdio.h>
int isPowerOfFour(int n)
{
    if(n<= 0)
    {
        return 0;
    }
    while(n % 4 == 0)
    {
        n= n/4;
    }
    return n==1;
}

int main()
{
    int n= 256;
    int result = isPowerOfFour(n);
    printf("%d as power of four : ", n);
    result == 1 ? printf("Yes") : printf("No");
    return 0;
}