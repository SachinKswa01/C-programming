#include<stdio.h>
int reverse(int x, int arr[]);

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    reverse(10, arr);
    for(int i=0; i<10; i++){
      printf("%d \t", arr[i]);
    }
return 0;

}

int reverse(int x, int arr[]){
for(int i=0; i<x/2; i++){
  int firstnum = arr[i];
  int secnum = arr[x-i-1];
  arr[i] = secnum;
  arr[x-i-1] = firstnum;

}
}