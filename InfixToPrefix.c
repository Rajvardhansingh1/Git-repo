#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Stack data structure for characters
struct Stack {
    int top;
    char items[MAX_SIZE];
};

// Function to initialize a stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(struct Stack* stack, char item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an item from the stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

// Function to return the top element of the stack without popping it
char peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack->items[stack->top];
}

// Function to check if a character is an operator (+, -, *, /, ^)
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to return the precedence of an operator
int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}
void infixToPostfix(char* infix, char* postfix) {
    struct Stack stack;
    initialize(&stack);
    int i, j;
    j = 0;

    for (i = 0; infix[i]; i++) {
        char token = infix[i];

        if (isalnum(token)) {
            postfix[j++] = token;
        } else if (token == '(') {
            push(&stack, token);
        } else if (token == ')') {
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            if (!isEmpty(&stack) && peek(&stack) != '(') {
                printf("Invalid Expression\n");
                exit(1);
            } else {
                pop(&stack);
            }
        } else {
            while (!isEmpty(&stack) && precedence(token) <= precedence(peek(&stack))) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }
    }

    while (!isEmpty(&stack)) {
        postfix[j++] = pop(&stack);
    }
    postfix[j] = '\0';
}
void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void infixToPrefix(char* infix, char* prefix) {
    char postfix[MAX_SIZE];
    infixToPostfix(infix, postfix);
    reverseString(postfix);
    strcpy(prefix, postfix);
}
int main() {
    char infix[MAX_SIZE];
    char prefix[MAX_SIZE];

    printf("Enter an infix expression: ");
    gets(infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
