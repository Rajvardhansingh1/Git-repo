#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
} *head,*last;

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = NULL;
    ptr->prev = NULL;
    ptr->data = data;
}

struct Node* insertAtBegin(int data){
    struct Node* ptr = createNode(data);
    if(head==NULL){
        head = last = ptr;
        ptr->prev = last;
        ptr->next = head;
    }
    else{
        ptr->next = head;
        head->prev = ptr;
        ptr->prev = last;
        last->next = ptr;
        head = ptr;
    }
    return head;
}

struct Node* insertAtEnd(int data){
    struct Node* ptr = createNode(data);
    if(head==NULL){
        head = last = ptr;
        ptr->prev = last;
        ptr->next = head;
    }
    else{
        ptr->prev = last;
        last->next = ptr;
        ptr->next = head;
        head->prev = ptr;
        last = ptr;
    }
    return head;
}

struct Node* insertAtIndex(int index, int data)
{
    struct Node* ptr = createNOde(data);
    struct Node* temp = head;
    int i = 0;
    while(i != index-1 && head!=NULL){
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    ptr->prev = temp;
    temp -> next = ptr;
    temp ->next->prev = ptr;
    return head;
}
