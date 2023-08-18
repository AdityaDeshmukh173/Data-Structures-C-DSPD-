#include <stdio.h>
void main(){
    int arr[10] = {3,5,2,1,6,4,9,7,8,10};
    int arrlength = 10;

    // //Bubble Sort
    // for (int i = 0; i < arrlength ; i++){
    //     for (int j = 0; j < arrlength-i; j++){
    //         if (arr[j]>arr[j+1]){
    //                 int temp = arr[j];
    //                 arr[j] = arr[j+1];
    //                 arr[j+1] = temp ;
    //         }       
    //     }        
    // }
    // for (int k = 0; k < arrlength; k++)
    // {
    //     printf("%d",arr[k]);
    // }

    //Selection Sort 
    for (int i = 0; i < arrlength-1; i++){
        int min_value = i ;
        for (int j = i+1; j < arrlength; j++){
            if (arr[min_value]>arr[j]){
                min_value = j ;
            }
        int temp = arr[i] ;
        arr[i] = arr[min_value] ;
        arr[min_value] =  temp ;
        }
        
    }
    for (int k = 0; k < arrlength; k++)
    {
        printf("%d",arr[k]);
    }

    //Insertion Sort 
    


    // //Binary Search 
    // int fi, li, mid ;
    // int key = 1;
    // fi = 0 ;
    // li = 9;

    // mid = (fi+li)/2 ;

    // while (li >= fi){
    //     if (arr[mid] == key ){
    //         printf("The key founf at index %d",mid+1);
    //         break;
    //     }
    //     else if (arr[mid] > key){
    //         li = mid-1;
    //     }
    //     else {
    //         fi = mid+1 ;
    //     }
        
        
    //     mid = (fi+li)/2 ;
    // }
    

    // for (int i = 0; i < arrlength; i++)
    // {
    //     printf("%d",arr[i]);
    // }
    
    
       
    
}