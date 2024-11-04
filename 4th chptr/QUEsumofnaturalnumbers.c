#include<stdio.h>

int main(){
    //sum of natural number given by user?
  int n;
  printf("enter ur number: ");
  scanf("%d", &n);
  int sum=0;
  for(int i=0; i<=n; i++){
    sum=sum + i;
    
  }printf("%d", sum);

    return 0;
}