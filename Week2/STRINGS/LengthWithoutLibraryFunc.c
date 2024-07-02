#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int len=0;
    printf("Enter string = ");
    scanf("%s",str);

    for(int i=0; str[i]!= '\0';i++)
    {
        len++;
    }
    printf("Length is = %d",len);
    return 0;
    
}