#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
}*first = NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t , *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first-> data = arr[0];
    first->next =NULL;
    last  = first;

    for(i=1;i<n;i++)
    {
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last =t;
    }
}

//recursive display
void Rdisplay(struct Node *p)
{
    if(p!= NULL)
    {
        cout<<p->data<<endl;
        Rdisplay(p->next);      //calling the same function again
    }
}
int main()
{
    int arr[]= {3,5,10,15,21};
    create(arr,5);
    Rdisplay(first);
    return 0;
}