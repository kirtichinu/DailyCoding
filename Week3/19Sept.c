// implementing push pop and display in a stack
#include <stdio.h>
#include <stdlib.h>
#define Size 5

typedef struct stack
{
    int S[Size];
    int top;
} stack;

void push(stack *st, int x)
{
    if (st->top == Size - 1)
    {
        printf("stack if full");
        return;
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(stack *st)
{
    int x;
    if (st->top == -1)
    {
        printf("stack is empty");
        return -9999;
    }
    x = st->S[st->top];
    st->top--;
    return x;
}
void display(stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}
int main()
{
    stack st;
    int x, ch, value;
    st.top = -1;
    while (1)
    {
        printf("menu :\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the elements = ");
            scanf("%d", &x);
            push(&st, x);
            break;

        case 2:
            x = pop(&st);
            if (x != -9999)
            {
                printf("the popped element is = %d\n", x);
            }
            break;

        case 3:
            display(st);
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice!!");
            break;
        }
    }
}