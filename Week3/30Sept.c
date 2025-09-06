// push...pop...peek...display...isFull...isEmpty

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
int peek(stack *st)
{
    if (st->top == -1)
    {
        printf("Stack is empty\n");
        return -9999;
    }
    return st->S[st->top];
}
void display(stack *st)
{
    int i;
    if (st->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (i = st->top; i >= 0; i--)
    {
        printf("%d ", st->S[i]);
    }
    printf("\n");
}
int isFull(stack *st)
{
    return st->top == Size - 1;
}
int isEmpty(stack *st)
{
    return st->top == -1;
}
int main()
{
    stack st;
    int x, ch, value;
    st.top = -1;
    while (1)
    {
        printf("menu :\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.isFull\n6. isEmpty\n7.Exit\n");
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
            x = peek(&st);
            if (x != -9999)
            {
                printf("The top element is: %d\n", x);
            }

            break;
        case 4:
            display(&st);
            break;

        case 5:
            if (isFull(&st))
            {
                printf("Stack is full\n");
            }
            else
            {
                printf("Stack is not full\n");
            }
            break;
        case 6:
            if (isEmpty(&st))
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack is not empty\n");
            }
            break;
        case 7:
            exit(0);

        default:
            printf("Invalid choice!!");
            break;
        }
    }
}