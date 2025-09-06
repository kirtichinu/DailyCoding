#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        printf("enter only positive numbers");
    }
    return (sum(n-1) + n);
}
int main()
{
    int n=5;
    printf("sum of the first %d numbers is %d",n,sum(n));
    return 0;
}