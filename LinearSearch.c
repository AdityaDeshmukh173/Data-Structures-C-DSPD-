#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int key=3;

    for(int j=0;j<6;j++){
        if (arr[j]==key){
            printf("index %d",j+1);
            break;
        }   
    
    }
}