#include<stdio.h>

int main(){ 
    //how many time 2 occur in this array?
int arr[]= {1, 2, 3, 4 , 5, 2, 23, 2, 42, 53, 24, 92};
int count=0; 
for(int i=0; i<11; i++){
    if(arr[i] == 2){
    count++;
    }
} printf("%d", count);  
return 0;
}