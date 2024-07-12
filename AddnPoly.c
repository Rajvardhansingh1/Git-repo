#include <Stdio.h>
#include<Stdlib.h>

typedef struct node{
    int coeff;
    int exp;
    struct node* next;
}node;

node* createNode(int coeff, int exp){
    node* newNode = (node*)malloc(sizeof(node));
    newNode ->coeff = coeff;
    newNode -> exp = exp;
    newNode ->next = NULL;
}

void insert(node** head, int coeff, int exp)
{
    node* newNode = createNode(coeff, exp);
    newNode->next = *head;
    *head = newNode;
}

node* addPoly(node* poly1, node* poly2){
    node* result = NULL;
    node* tempterm = NULL;

    while(poly1 != NULL || poly2 != NULL)
    {
        if(poly1 != NULL && poly2 != NULL)
        {
            if(poly1->exp > poly2->exp)
            {
                insert(&tempterm, poly1->coeff, poly1->exp);
                poly1=poly1->next;
            }

            else if(poly1->exp<poly2->exp)
            {
                insert(&tempterm, poly2->coeff, poly2->exp);
                poly2 = poly2->next;
            }
            else{
                insert(&tempterm, poly1->coeff + poly2->coeff, poly1->exp);
                poly1 = poly1->next;
                poly2 = poly2->next;
            }
        }    
        else if(poly1!=NULL)
        {
            insert(&tempterm, poly1->coeff, poly1->exp);
            poly1=poly1->next;
        } 
        else if(poly2!=NULL)
        {
            insert(&tempterm, poly2->coeff, poly2->exp);
            poly2=poly2->next;
        } 
    }
    while(tempterm != NULL){
        insert(&result, tempterm->coeff, tempterm->exp);
        tempterm = tempterm->next;
    }
    return result;
}

void displayPoly(node* head){
    node* temp = head;
    while(temp != NULL){
        printf("%dx^%d", temp->coeff, temp->exp);
        if(temp->next != NULL)
        {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    node *poly1 = NULL;
    node *poly2 = NULL;

    // Adding terms to the first polynomial
    insert(&poly1, 7, 0);
    insert(&poly1, 5, 1);
    insert(&poly1, 3, 2);

    // Adding terms to the second polynomial
    insert(&poly2, 6, 0);
    insert(&poly2, 2, 2);
    insert(&poly2, 4, 3);

    printf("First polynomial: ");
    displayPoly(poly1);

    printf("Second polynomial: ");
    displayPoly(poly2);

    node *resultantPoly = addPoly(poly1, poly2);

    printf("Resultant polynomial after addition: ");
    displayPoly(resultantPoly);

    return 0;
}