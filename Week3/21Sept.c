//Code to check if the given number is a power of two or not

#include<stdio.h>
int powerOftwo(int n)
{
    if(n<=0)
    {
        return 0;
    }
    return (n&(n-1))==0;
}
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    int result = powerOftwo(n);
    printf("%d is power of 2 : ",n);
    result? printf("Yes"): printf("No");
}