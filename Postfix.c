#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int stack[25];
int top = -1;
int ch;

void push(int ele){
    if (top == 24){
        printf("Stack is Full !!\n");
    }
    else{
        top++;
        stack[top] = ele;
    }
}
int pop(){
    if (top == -1){
        printf("Stack is Empty !!\n");
    }
    else{
        ch = stack[top];
        top--;
    }
    return ch;
}
void display(){
    printf("\nStack = ");
    for (int i = 0; i <= top; i++){
        printf("%d | ",stack[i]);
    }
}

void main(){
    char postfix[25] , ele;
    int num1,num2,ans ;
    printf("Enter PostFix expression : ");
    scanf("%s",postfix);
    printf("PostFix Expression is : %s \n",postfix);

    int i=0 ;
    while (i <= strlen(postfix)-1){
        
        ele = postfix[i] ;
        if (isdigit(ele)){
            push(ele-'0');  //To push the digit not ascii value
        }
        else{
            num1 = pop();
            num2 = pop();
            switch (ele)
            {
            case '^':
                ans = pow(num2,num1);
                break;
            case '/':
                ans = num2/num1 ;
                break;
            case '*':
                ans = num2*num1 ;
                break;
            case '+':
                ans = num2 + num1 ;
                break;
            case '-':
                ans = num2 - num1 ;
                break; 
            
            default:
                break;
            }
            push(ans);
        }
        display();
        i++;
    }
    printf("Ans : %d \n",pop());
}