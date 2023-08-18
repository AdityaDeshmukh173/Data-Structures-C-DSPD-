#include<stdio.h>
int main(){
    int arr[] = {3,5,2,6,1,4,7} ;
    
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7-1-i; j++){
            if (arr[j] > arr[j+1])
            {
                int t = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1] = t ;
            }
            
        }
    }

    printf("The Sorted Array is : \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}