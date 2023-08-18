#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* InsertionAtFirst(struct Node *head , int data){            //Case 1 
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data ;
    ptr->next = head ;
    return ptr;
}

struct Node* InsertAtEnd(struct Node*head , int data){                  //Case 2 
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head;
    while (p->next!= NULL){
        p = p->next;
    }
    p->next = ptr ;
    ptr->next = NULL;
    return head ;
}

struct Node* InsertAtIndex(struct Node*head , int data , int index){    //Case 3
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = head ;
    int i = 0;
    while (i != index-1){
        p = p->next;
        p++;
    }
    ptr->data = data;
    ptr->next = p->next ;
    p->next = ptr ;
    return head;
}

struct Node* DeleteFirst(struct Node* head){
    struct Node* ptr = head ;
    head = head->next ;
    free(ptr);
    return head ;
}

struct Node* DeleteAtIndex(struct Node* head, int index){
    struct Node* p = head ;
    struct Node*q = head->next ;
    for (int i = 0; i < index-1; i++){
        p = p->next ;
        q = q->next ;
    }
    p->next = q->next ;
    free(q) ;
    return head;
}

struct Node* DeleteAtLast(struct Node* head){
    struct Node* p = head ;
    struct Node* q = head->next ;
    while (q->next != NULL){
        p = p->next ;
        q = q->next ;
    }
    p->next = NULL ;
    free(q);
    return head ;
}

void LinkedListTraversal(struct Node *ptr){
    while (ptr != NULL){
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    } 
} 

void main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link for the first and second
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 15;
    third->next = fourth;
    fourth->data = 24;
    fourth->next = NULL;

    printf("Linked List Before Insertion : \n");
    LinkedListTraversal(head);
    head = InsertionAtFirst(head,34);
    head = InsertAtIndex(head, 44,1);
    head = InsertAtEnd(head, 94);
    printf("Linked Lisr After Insertion : \n");
    LinkedListTraversal(head);
    printf("Linked List Before Deletion : \n");
    LinkedListTraversal(head);
    head = DeleteFirst(head);
    head = DeleteAtIndex(head,3);
    head = DeleteAtLast(head);
    printf("Linked Lisr After Deletion : \n");
    LinkedListTraversal(head);
}