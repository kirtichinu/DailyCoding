//to check if the given string is a palindrome or not

#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
using namespace std;

bool isPalindrome(char* s) {
    int start = 0;
    int end = strlen(s) - 1;
    while (start < end) {
        while (start < end && !isalnum(s[start])) {
            start++;
        }
        while (start < end && !isalnum(s[end])) {
            end--;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char s1[] = "malayalam";
    char s2[] = "A kirti, A girl";

    cout<<isPalindrome(s1)<<endl;
    cout<<isPalindrome(s2)<<endl;
     return 0;
}