#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    int arr[] = {3,6,7,9,10,4,55,6};
    create(arr,8);
    printf("Length of the ll is = %d",count(first));

    return 0;

}