#include<stdio.h>
#include<math.h>

int mySqrt(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    if (x < 0) {
        return 0;
    } else {
        return sqrt(x);
    }
}
int main()
{
    int x= 169;
    printf("sqrt of %d is %d ",x,mySqrt(x));
    return 0;
}