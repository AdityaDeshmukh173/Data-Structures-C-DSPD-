#include <stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue*q){
    if (q->r == q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue*q){
    if (q->r==q->size-1){
        return 1;
    }
    return 0;   
}

void Enqueue(struct queue*q, int val){
    if (isFull(q)){
        printf("Queue is Full !!\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }   
}

int Dequeue(struct queue*q){
    int a = -1;
    if (isEmpty(q)){
        printf("Queue is Empty !!\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size*sizeof(int));

    //BSF Implimentation 
    int node;
    int i=3 ;        //Starting Point of Traversal
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = { {0,1,1,1,0,0,0},
                    {1,0,1,0,0,0,0},
                    {1,1,0,1,1,0,0},
                    {1,0,1,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
    printf("%d ",i);
    visited[i] = 1;
    Enqueue(&q, i); //Enqueue i for exploration
    while (!isEmpty(&q)){
        int node = Dequeue(&q);
        for (int j = 0; j < 7; j++){
            if (a[node][j] == 1 && visited[j]==0){
                printf("%d ",j);
                visited[j]= 1;
                Enqueue(&q,j);   
            }
        }
        
    }
    
}