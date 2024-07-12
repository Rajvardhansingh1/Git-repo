#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100

struct stack{
    int top;
    int arr[max];
};

void initialaize (struct stack *stack)
{
    stack->top = -1;
}

int isEmpty(struct stack *stack) {
 return stack->top == -1;
}

int isFull(struct stack * stack){
    return stack->top == max-1;
}

void push(struct stack * stack, int data)
{
    if(isFull(stack))
    {
        printf("Stack is full");
    }
    else{
        stack->top++;
        stack->arr[stack->top] = data;
    }
}

int pop(struct stack * stack)
{
    if(isEmpty(stack))
    {
        printf("stack underflow");
    }
    int popeditem = stack->arr[stack->top];
    stack->top--;
    return popeditem;
}

int main(){
    struct stack palindrome;
    char input[max];
    printf("Enter string : ");
    scanf("%s",input);
    int i = 0;
    int flag = 1;
    while(input[i]!='\0')
    {
        push(&palindrome,input[i]);
        i++;
    }

    while(input[i]!='\0')
    {
        if(input[i]!=pop(&palindrome))
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}