#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head = NULL;

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

struct Node* deleteFirst()
{
    struct Node* ptr = head;
    head = head->next;
    head ->prev = NULL;
    free(ptr);
    return head;
}

struct Node* deleteLast()
{
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node* deleteByIndex(int index)
{
    struct Node* p = head;
    struct Node* q = head->next;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    q->next->prev = p;
    free(q);
    return head;
}