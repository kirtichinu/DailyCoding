#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int x) {
    long long rev = 0;
    int original = x;
    if (x < 0)
        return 0;
    while (x > 0) {
        long long p = x % 10;
        rev = (rev * 10) + p;
        x = x / 10;
    }
     if (rev == original)
     {
        return 1;
     }
}
int main()
{
    int x= 1030301;
    int result = isPalindrome(x);
    result == 1 ? cout<<"True" : cout<<"False";
    return 0;
}