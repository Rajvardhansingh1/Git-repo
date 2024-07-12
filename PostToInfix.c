#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Stack {
    int top;
    int size;
    char *arr;
};

struct Stack* createStack(int size) {
    struct Stack* sp = (struct Stack*)malloc(sizeof(struct Stack));
    sp->top = -1;
    sp->size = size;
    sp->arr = (char*)malloc(sp->size * sizeof(char));
    return sp;
}

void push(struct Stack* sp, char value) {
    sp->arr[++sp->top] = value;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

char pop(struct Stack* sp) 
{
    if (sp->top == -1)
    {
        return '\0';
    } 
    else 
    {
        return sp->arr[sp->top--];
    }
}

char* postfixToInfix(char* postfix) {
    struct Stack* sp = createStack(strlen(postfix) + 1);
    char* infix = (char*)malloc(strlen(postfix) * 2 * sizeof(char));
    int i = 0, j = 0;
    for (i = 0; postfix[i]; i++) {
        if (!isOperator(postfix[i])) {
            push(sp, postfix[i]);
        } else {
            char operand1 = pop(sp);
            char operand2 = pop(sp);
            infix[j++] = '(';
            infix[j++] = operand2;
            infix[j++] = postfix[i];
            infix[j++] = operand1;
            infix[j++] = ')';
            push(sp, infix[j-1]);
        }
    }
    infix[j] = '\0';
    free(sp->arr);
    free(sp);
    return infix;
}

int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    printf("The infix exp is : %s",postfixToInfix(postfix));
    return 0;
}
