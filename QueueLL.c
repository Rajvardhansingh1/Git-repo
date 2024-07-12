#include <stdlib.h>
#include <stdio.h>
struct node{
    int data;
    struct node* next;
};

struct node * f = NULL;
struct node * r = NULL;

int isEmpty()
{
    if(f==NULL && r==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    struct node* n =(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int value)
{
    struct node * n = (struct node*)malloc(sizeof(struct node));
    if(isFull())
    {
        printf("The Stack is Full ");
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if(f==NULL && r==NULL)
        {
            f=n;
            r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}

int dequeue()
{
    if(isEmpty())
    {
        printf("The queue is empty \n");
    }
    else
    {
        struct node* p =f;
        f = f->next;
        int x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    enqueue(74);
    enqueue(55);
    enqueue(7);
    enqueue(4);
    printf("%d \n",dequeue());
    printf("%d \n",dequeue());
    printf("%d \n",dequeue());
}