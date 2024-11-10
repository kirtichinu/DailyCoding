// is subsequence
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isSubsequence(char *s, char *t)
{
    int i = 0, j = 0;
    int len_s = strlen(s);
    int len_t = strlen(t);

    while (i < len_s && j < len_t)
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i == len_s;
}
int main()
{
    char s1[] = "abc";
    char t1[] = "ahbgdc";
    printf("%s\n", isSubsequence(s1, t1) ? "true" : "false");

    char s2[] = "mnop";
    char t2[] = "mpqrst";
    printf("%s\n", isSubsequence(s2, t2) ? "true" : "false");

    return 0;
}