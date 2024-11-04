#include<stdio.h>
int reverse(int x, int arr[]);

int main(){
  int x  =6; 
  int fibbo[x];
  fibbo[0] =0;
  fibbo[1]= 1;

    for(int i=2 ; i<=x; i++){
     fibbo[i] = fibbo[i-1] + fibbo[i -2];
     printf("%d \t", fibbo[i]);
    }
    printf(" \n");
    return 0;
}