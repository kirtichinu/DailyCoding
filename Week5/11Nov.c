// conversion from roman to integer values

#include <stdio.h>
#include <string.h>
int romantoint(char *s)
{
    int romanvalues[256] = {0};
    romanvalues['I'] = 1;
    romanvalues['V'] = 5;
    romanvalues['X'] = 10;
    romanvalues['L'] = 50;
    romanvalues['C'] = 100;
    romanvalues['D'] = 500;
    romanvalues['M'] = 1000;

    int total = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (i < length - 1 && romanvalues[s[i]] < romanvalues[s[i + 1]])
        {
            total -= romanvalues[s[i]];
        }
        else
        {
            total += romanvalues[s[i]];
        }
    }
    return total;
}
int main()
{
    char romanNum[] = "MCMXCIV";
    int integerVal = romantoint(romanNum);
    printf("the int value of the roman num %s is %d \n", romanNum, integerVal);
    return 0;
}