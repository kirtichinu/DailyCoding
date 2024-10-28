//deletion in a linked list

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int arr[],int n)
{
    struct Node *t , *last;
    int i;

    first = (struct Node*)malloc(sizeof(struct Node));

    first->data = arr[0];
    first-> next =NULL;
    last = first;

    for(i=0; i<n; i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next =NULL;
        last->next  = t;
        last =t;
    }
}
int count(struct Node *p)
{
    int len = 0;
    while(p)
    {
        len++;
        p= p->next;
    }
    return len;
}

void display (struct Node*p)
{
    while(p!= NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int Delete (struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1 , i;
    if(index<1|| index > count(p))
    {
        return -1;
    }
    if(index == 1)
    {
        q= first;
        x= first -> data;
        first = first -> next;
        free(q);
        return x;
    }
    else{
        for(i=0; i<index -1; i++)
        {
            q=p;
            p= p->next;
        }
        q->next = p-> next;
        x=p->data;
        free(p);
        return x;
    }
}

int main()
{
    int arr[] = {1,5,7,9,11};
    create(arr,5);
    cout<<"original data = "<<endl;
    display(first);

    int deletedvalue= Delete(first,1);
    cout<<"List after Deletion = "<<endl;
    display(first);
    
    return 0;
}