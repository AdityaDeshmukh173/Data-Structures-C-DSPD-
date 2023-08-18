#include <stdio.h>
#define size 100
int queue[size];
int front = -1;
int rear = -1;

void enqueue(){
    int item;
    if (rear == size-1){
        printf("Queue OverFlow !!\n");
        return;
    }
    else{
        if (front == -1){
            front=0 ;
        }
        printf("Enter the element : \n");
        scanf("%d",&item);
        rear=rear+1 ;
        queue[rear] = item ;
    }
}
void dequeue(){
    if (front == -1 || front > rear){
        printf("Queue UnderFlow !!\n");
        return;
    }else{
        printf("Element deleted from Queue is : %d\n",queue[front]);
        front=front+1 ;
    }
}
void display(){
    int i;
    if (front == -1){
        printf("Queue is Empty \n");
    }
    else{
        printf("The Queue is : \n");
        for (int i = front; i <= rear; i++){
            printf("%d \t",queue[i]);
        }
        printf("\n");
    } 
}

void main(){
    int ip ;
    
    do{
        printf("Enter Operatio :\n");
        printf("1.Enqueue \t 2.Dequeue\n3.Display\t 0.Exit \n");
        scanf("%d",&ip);

        switch (ip){
        case 0:
            break;
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
        
    } while (ip != 0);
    
}