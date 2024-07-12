#include <stdio.h>
#include <stdlib.h>

struct Node{
    int exp;
    float coeff;
    struct Node* next;
};

struct Node* createNode(int co, int exp){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->coeff = co;
    ptr->exp = exp;
    ptr->next = NULL;
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2){
    struct Node* temp = NULL;
    struct Node* result = NULL;
    struct Node* prev = NULL;
    while(poly1 != NULL && poly2 != NULL)
    {
        if(poly1->exp > poly2->exp)
        {
            temp = createNode(poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        }
        else if(poly1->exp < poly2->exp)
        {
            temp = createNode(poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
        else{
            temp = createNode((poly1->coeff + poly2 -> coeff), poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;

        }
        if(result == NULL){
            result = temp;
        }
        else{
            prev -> next = temp;
        }
        prev = temp;
    }
    while(poly1 != NULL)
    {
        temp = createNode(poly1->coeff, poly1->exp);
        poly1 = poly1->next;
        if(result == NULL)
        {
            result = temp;
        }
        else{
            prev ->next = temp;
        }
        prev = temp;
    }

    while(poly2 != NULL)
    {
        temp = createNode(poly2->coeff, poly2->exp);
        poly2 = poly2->next;
        if(result == NULL)
        {
            result = temp;
        }
        else{
            prev-> next = temp;
        }
        prev = temp;
    }    
    return result;
}

void displayPolynomial(struct Node* poly)
{
    if(poly == NULL){
        printf("0 \n");
    }
    else{
        while(poly!=NULL){
            printf("%d x %d", poly->coeff, poly -> exp);
            poly = poly->next;
            if(poly != NULL){
                printf("+");
            }
        }
        printf("\n");
    }
}

int main(){
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;
    poly1 = createNode(3,2);
    poly1->next = createNode(4,1);
    poly1->next->next = createNode(2,0);

    poly2 = createNode(2,2);
    poly2->next = createNode(3,1); 
    poly2->next->next = createNode(5,0);

    displayPolynomial(poly2);
    printf("\n");
    displayPolynomial(poly1);
    printf("\n");
    result = addPolynomials(poly1,poly2);
    printf("sum \n"); 
    displayPolynomial(result);
}