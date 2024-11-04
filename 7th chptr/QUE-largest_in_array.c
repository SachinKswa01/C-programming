#include<stdio.h>

int main(){ 
    // largest number in this array?
int arr[]= {1, 2, 3, 4, 5, 2, 23, 2, 42, 53, 24, 92};
int largest =arr[0] ;
for(int i=0; i<12; i++){
    if(arr[i]> largest){
        largest = arr[i];
    }
} printf("%d", largest);  
return 0;
}