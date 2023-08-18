#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node* CreateNode(int data){
    struct node*n ;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n; 
}

void PreOrder(struct node* root){
    if (root != NULL){
        printf("%d ",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct node* root){
    if (root != NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data);
    }
}

void InOrder(struct node* root){
    if (root != NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}

void main(){
    struct node *p = CreateNode(4);
    struct node *p1 = CreateNode(1);
    struct node *p2 = CreateNode(6);
    struct node *p3 = CreateNode(5);
    struct node *p4 = CreateNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("PreOrder Traversal is : \n");
    PreOrder(p);
    printf("\nPostOrder Traversal is : \n");
    PostOrder(p);
    printf("\nInOrder Traversal is : \n");
    InOrder(p);
}