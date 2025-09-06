#include<stdio.h>
#include<string.h>

int lenOfLastWord(char *s)
{
    int len = strlen(s);
    int wordlen = 0;
    int i;

    for(i= len -1; i>= 0; i--)
    {
        if(s[i] != ' ')
        {
            wordlen++;
        }

        else if(wordlen > 0)
        {
            break;
        }
    }

    return wordlen;
}

int main()
{
    char s[] = "kirti is girl";
    int length = lenOfLastWord(s);
    printf("Length of the last word  is = %d",length);
    return 0;

}