#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct stack
{
    char *arr;
    int size;
    int top;
};

struct stack* createStack(int size)
{
    struct stack * ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr->size = size;
    ptr->top = -1;
    ptr->arr = (char*)malloc(sizeof(struct stack));
    return ptr;
}

int stackTop(struct stack* ptr)
{
    return ptr->arr[ptr->top];
}
void push(struct stack* ptr, int value)
{
    if(ptr->top== ptr->size-1)
    {
        printf("Stack is full \n");
    }
    else{
        ++ptr->top;
        ptr->arr[ptr->top] = value;
    }
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is underflow");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int checkPair(char val1, char val2)
{
    return ((val1 =='('&&val2 ==')' || val1 == '['&& val2 == ']' || val1 == '{'&&val2 == '}'));
}

int checkBalance(char exp[], int length)
{
    struct stack* ptr = createStack(length);
    for(int i=0; i<length;i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(ptr, exp[i]);
        }
        else{
            if(ptr->top == -1)
            return 0;
            else if (checkPair(ptr->arr[ptr->top], exp[i]))
            {
                pop(ptr);
                continue;
            }
            else{
                return 0;
            }
        }
    }
    return (ptr->top==-1);
}

int main()
{
    char c[100];
    printf("Enter expression : ");
    gets(c);
    int length = strlen(c);
    checkBalance(c,length)?printf("Balanced"):printf("Not balanced");
}