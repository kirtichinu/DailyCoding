#include<stdio.h>
#include<string.h>

void str_rev(char *str, int start, int end)
{
    if(start >= end)
    {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    str_rev(str, start+1, end-1);
}

int main()
{
    char str[] = "kirti is chinu";
    int length = strlen(str);

    str_rev(str, 0, length -1);
    printf("%s\t",&str);
    return 0;
}