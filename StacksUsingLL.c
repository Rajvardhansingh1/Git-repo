#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node* createStack()
{
    struct node * sp = (struct node *)malloc(sizeof(struct node));
    return sp;
}

void Traversal(struct node* ptr)
{
    while (ptr !=NULL)
    {
        printf("The element is %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node* top)
{
    if(top == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node* top)
{
    struct node* ptr = createStack();
    if(ptr == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push (struct node* top, int x)
{
    if(isFull(top))
    {
        printf("Stack is Full");
    }
    else{
        struct node* n =createStack();
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node ** top)
{
    if(isEmpty(*top))
    {
        printf("Stack is empty");
    }
    else{
        struct node* p = top;
        *top = (*top)->next;
        int x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    struct node *top = NULL;
    top = push(top, 77);
    top = push(top,6);
    top = push(top,44);
    Traversal(top);
}