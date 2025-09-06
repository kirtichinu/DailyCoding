#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Reverse_String(char* str)
{
    int length= strlen(str);
    int start = 0;
    int end = length -1;

    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    printf("Enter string = ");
    scanf("%s",str);

    Reverse_String(str);
    printf("Reverse is = %s",str);
    return 0;
}