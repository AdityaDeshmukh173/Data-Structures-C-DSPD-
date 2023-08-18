#include<stdio.h>         //Best case Elemrnt at middle index

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int mid, start, end ,target ;
    target = 5 ;

    start = 0;
    end = 9;
    mid = (start+end)/2 ;

    while (start<=end){
        if (arr[mid] == target)
        {
            printf("The element is at %d location",mid+1);
            break;
        }
        else if (arr[mid] < target)
        {
            start= mid+1 ;
        }
        else{
            end = mid-1 ;
        }
        mid=(start+end)/2 ;
    }
    
 return 0;
}
