#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define SIZE 105
char *Decode(char *s)
{
    int len = strlen(s);
    char *decoded = (char *)malloc(SIZE);
    int decodeIndex = 0;
    int i = 0;
    while (i < len)
    {
        if (isdigit(s[i]))
        {
            int num = 0;
            while (isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i++;
            while (s[i] != '\0' && s[i] != ']')
            {
                if (isalpha(s[i]))
                {
                    for (int j = 0; j < num; j++)
                    {
                        decoded[decodeIndex++] = s[i];
                    }
                }
                else if (isdigit(s[i]))
                {
                    int nestednum = 0;
                    while (isdigit(s[i]))
                    {
                        nestednum = nestednum * 10 + (s[i] - '0');
                        i++;
                    }
                    i++;
                    while (s[i] != ']' && s[i] != '\0')
                    {
                        if (isalpha(s[i]))
                        {
                            for (int j = 0; j < nestednum; j++)
                            {
                                decoded[decodeIndex++] = s[i];
                            }
                        }
                        i++;
                    }
                }
                i++;
            }
            if (s[i] == ']')
            {
                i++;
            }
        }
        else if (isalpha(s[i]))
        {
            decoded[decodeIndex++] = s[i++];
        }
        else
        {
            i++;
        }
    }
    decoded[decodeIndex] = '\0';
    return decoded;
}
int main()
{
    char input[] = "3[a]2[bc]";
    char *decodedstring = Decode(input);
    printf("Decoded string = %s",decodedstring);
    return 0;
}