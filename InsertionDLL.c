#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}*head;

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void Traversal()
{
    struct Node* temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("Element : %d\n", temp->data);
        temp = temp->next;
    }
}

struct Node* insertAtFirst(int data){
    struct Node* ptr = createNode(data);
    if(head == NULL){
        head = ptr;
        return head;
    }
    head ->prev = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node* insertAtIndex(int data, int index){
    struct Node* ptr = createNode(data);
    struct Node* q = head;
    int i = 0;
    while(i!= index-1)
    {
        q = q->next;
        i++;
    }
    ptr->data = data;
    ptr->next = q->next;
    ptr->prev = q;
    q->next = ptr;
    return head;
}

struct Node* insertAtEnd(int data)
{
    struct Node* ptr = createNode(data);
    struct Node* q = head;
    while(q->next != NULL)
    {
        q = q->next;
    }
    ptr->next = NULL;
    ptr->prev = q;
    q->next = ptr;
    return head;
}

int main()
{
    head = NULL;
    int number;
    int data;
    printf("Enter the number of nodes : ");
    scanf("%d", &number);
    for(int i = 0; i<number;i++)
    {
        printf("Enter data : ");
        scanf("%d",&data);
        insertAtFirst(data);
    }

    printf("enter index : ");
    int index;
    scanf("%d",&index);
    printf("enter data : ");
    scanf("%d",&data);
    insertAtIndex(data, index);
    insertAtEnd(5);
    Traversal();
}