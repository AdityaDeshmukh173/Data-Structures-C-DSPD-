#include <stdio.h>

int main(){

    int arr[] = {3,5,2,6,1,4,7} ;

    for(int i=0 ; i < 6 ; i++){
        int MinPos = i; 
        for(int j=i+1 ; j < 7 ;j++){
            if(arr[MinPos] > arr[j]){
                MinPos = j ;
            }
        }
        //swap 
        int temp = arr[MinPos] ;
        arr[MinPos] = arr[i] ;
        arr[i] = temp ;
    }

    printf("Sorted Array is : \n");
    for (int i = 0; i < 7; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}