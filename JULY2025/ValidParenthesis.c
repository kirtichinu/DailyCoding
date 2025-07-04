bool isValid(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;

    char stack[len];
    int top = -1;
    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{')
        {
            stack[++top] = c;
        }
        else
        {
            ,
                if (top == -1) return false;

            char open = stack[top--];
            if ((c == ')' && open != '(') || (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
            {
                return false;
            }
        }
    }
    return top == -1;
}