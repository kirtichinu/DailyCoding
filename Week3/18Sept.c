//implementation of a static stack to push and display

#include<stdio.h>
#include<stdlib.h>
#define Size 3

typedef struct stack{
    int S[Size];
    int top;
}stack;
void push(stack*st, int x)
{
    if(st-> top == Size-1)
    {
        printf("stack if full");
        return;
    }
    else
    {st->top++;
    st-> S[st-> top]=x;}
}
void display(stack st)
{
    int i;
    for( i = st.top; i>=0; i--)
    {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}
int main()
{
    stack st;
    int x;
    st.top = -1;
    while(1)
    {
        printf("enter element of stack =(-1 to stop) = ");
        scanf("%d", &x);
        if(x== -1)
        break;
        push(&st,x);
    }
    printf("stack elements = \n");
    display(st);
    return 0;
}