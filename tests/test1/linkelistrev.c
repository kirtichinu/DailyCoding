#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *CreateNode(int data)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = data;
    nn->next = NULL;
    return nn;
}

struct node *RevLL(struct node *head)
{
    struct node *q = NULL;
    struct node *p = head;
    struct node*temp= NULL;
    while (p != NULL)
    {
        temp = p->next;
        p->next = q;
        q = p;
        p =temp;   
    }
    return q;
}
void PrintLL(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *head = CreateNode(1);
    head->next = CreateNode(2);
    head->next->next = CreateNode(3);
    
    printf("Given LL: ");
    PrintLL(head);

    printf("Rev LL:");
    head= RevLL(head);
    PrintLL(head);
    return 0;

}