#include <stdio.h>
int main(){
	int arr[] = {4,3,8,9,2,6,7};

	for(int i=1 ; i< 7 ; i++){
            int curr= arr[i] ;
            int prev = i-1 ;
            //Finding out the correct position for insertion 
            while(prev >=0 && arr[prev]> curr){
                arr[prev+1] = arr[prev] ;
                prev-- ;
            }
            //Insertion 
            arr[prev+1] = curr ;
	}
	printf("The sorted Array is : \n");
	for (int i = 0; i < 7; i++){
		printf("%d ",arr[i]);
	}
	
}