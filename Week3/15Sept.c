#include<stdio.h>
#include<math.h>
double myPow(double x, int n) 
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return x;
    }
    if(x==0)
    {
        return 0;
    }
    else{
        if(n % 2 == 0)
        {
            return pow(x*x, n/2);
        }
        
        return pow(x,n);
        
    }
}
int main()
{
    int x=5, n=2;
    printf("power is = %f",myPow(x,n));
    return 0;
}