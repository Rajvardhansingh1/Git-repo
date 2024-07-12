#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

struct Node* insertAtEnd(int data){
    struct Node* temp = head;
    struct Node* ptr = createNode(data);
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    ptr->next = NULL;
    ptr->prev = temp;
    temp->next = ptr;
    temp=ptr;
    return head;
}

struct Node* deleteAtEnd()
{
    struct Node* p = head;
    struct Node* q = head -> next;
    while(q->next!=NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

struct Node* insertAtIndex(int data, int index)
{
    struct Node* temp = head;
    struct Node* ptr = createNode(data);
    int i = 0;
    while(i!= index-1)
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    ptr->prev=temp;
    temp->next = ptr;
    return head;
}

struct Node* deleteAtIndex(int index){
    struct Node* q = head;
    struct Node* p = head->next;
    int i = 0;
    while(i!=index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    q->next->prev = p;
    free(q);
    return head;
}

struct Node* traversal()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        printf(" the element in the DLL are, DLL Elements : %d", temp->data);
    }
}

int main()
{
    int numberofNode, data; 
    struct Node* newNode;
    printf("enter number of nodes : ");
    scanf("%d" ,&numberofNode);
    for (int i=0; i<numberofNode;i++)
    {
        printf("enter data : ");
        scanf("%d" , &data);
        newNode = createNode(data);
        insertAtEnd(newNode);
    }

}
