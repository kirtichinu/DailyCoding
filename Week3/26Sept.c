//add all digits of the number until a one digit number is recieved
#include<stdio.h>

int addDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num= num / 10;
    }
    if(sum >= 10)
    {
        return addDigits(sum);
    }
    return sum;
}
int main()
{
    int num=123456;
    printf("sum is = %d",addDigits(num));
    return 0;
}