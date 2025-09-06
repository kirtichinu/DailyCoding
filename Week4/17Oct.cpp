#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
struct Node *LSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    int arr[] = {3, 6, 8, 12, 4, 1};
    create(arr, 6);

    temp = LSearch(first, 12);
    if (temp)
    {
        cout << "key found " << temp->data << endl;
    }
    else
    {
        cout << "Key not found!" << endl;
    }
    return 0;
}