#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct Node* insert(struct Node* root, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(data < newNode->data)
    {
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}

int inOrder(struct Node* root){
    if(root!=NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

struct Node* preInOrder(struct Node* root)
{
    root = root->left;
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

struct Node* deleteNode(struct Node* root, int val){
    struct Node* ipre;
    if(root == NULL){
        return NULL;
    }
    if(root->left ==  NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    if(val<root->data)
    {
        root->left = deleteNode(root->left, val);
    }
    else if(val>root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        ipre = preInOrder(root);
        root->data = ipre->data;
        root->left = deleteNode(root->left, ipre->data);
    }
    return root;
}

struct Node* searchNode(struct Node* root, int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    else{
        if(root->data == val)
        {
            return root;
        }
        else
        {
            if(root->data > val)
            {
                return searchNode(root->left,val);
            }
            else{
                return searchNode(root->right, val);
            }
        }
    }
}

int main(){
    struct Node* root = createNode(5);
    struct Node* p1 = createNode(3);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(1);
    struct Node* p4 = createNode(4);

    root -> left = p1;
    root-> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    inOrder(root);
    printf("\n");
    deleteNode(root,4);
    inOrder(root);
    struct Node* index = searchNode(root,4);
    printf(" \n %d", index->data);
}