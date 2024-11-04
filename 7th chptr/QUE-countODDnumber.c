#include<stdio.h>
int countodd(int x, int arr[]);

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,11};
    printf("%d", countodd(10, arr));
return 0;

}

int countodd(int x, int arr[]){
 int count =0; 
 
 for(int i=0; i<x; i++){
    if(arr[i] % 2 != 0){
        count++;
    }
  } return count;
}