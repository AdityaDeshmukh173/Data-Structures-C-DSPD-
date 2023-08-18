#include <stdio.h>

#define N 5
int stack[N];
int Top =-1;

void push(){
    int x;
    printf("Enter the Element : \n");
    scanf("%d",&x);
    if (Top == N-1){
        printf("Stack OverFlow !!\n");
    }
    else{
        Top++;
        stack[Top] = x;
    }
}

void pop(){
    int item;
    if (Top == -1){
        printf("Stack UnderFlow !!\n");
    }
    else{
        item = stack[Top];
        printf("%d \n",item);
        Top--;
    }
}
void display(){
    for (int i = Top ; i >= 0; i--){
        printf("%d \t ",stack[i]);
    }
    printf("\n");
}
void main(){
    int ch;
   
    do{        
        printf("Enter the choice for opertion: \n");
        printf("1.Push \t 2.Pop \n3.Display \t 0.Exit\n");
        scanf("%d",&ch);
 
        switch (ch){
        case 0:
            break;
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid Input");
            break;
        }
    } while (ch != 0);
    
}