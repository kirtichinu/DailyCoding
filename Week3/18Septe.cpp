
#include<iostream>
using namespace std;

#define Size 3

typedef struct stack{
    int S[Size];
    int top;
}stack;
void push(stack*st, int x)
{
    if(st-> top == Size-1)
    {
        cout<<"stack if full"<<endl;
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
        cout<<st.S[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    stack st;
    int x;
    st.top = -1;
    while(1)
    {
        cout<<"enter element of stack =(-1 to stop) = "<<endl;
        cin>>x;
        if(x== -1)
        break;
        push(&st,x);
    }
    cout<<"stack elements ="<<endl;
    display(st);
    return 0;
}