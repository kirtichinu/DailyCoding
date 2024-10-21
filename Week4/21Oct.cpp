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
    struct Node *t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data =arr[0];
    first -> next =NULL;
    last = first;

    for(i= 1;i< n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last= t;
    }

}

int count(struct Node *p)
{
    int length = 0;
    while(p)
    {
        length++;
        p = p->next;
    }
    return length;

}
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}

void Insert(struct Node *p, int index, int x)
{
    int i;
    struct Node *temp;
    if(index<0 || index>count(p))
    {
        return;
    }
    temp= (struct Node *)malloc(sizeof(struct Node));
    temp-> data = x;

    if(index ==0)
    {
        temp->next = first;
        first = temp;
    }
    else
    {
        for(i=0; i<index-1;i++)
        {
            p =p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    create(arr,5);

    Insert(first,2,15);
    display(first);

    return 0;

}