#include<stdio.h>

int main(){
  //Break statement.
  //input until enters a odd number.
int n;

do{
  printf("enter ur number: ");
  scanf("%d", &n);
  printf("%d \n", n);
  if(n%2!=0){
    break;
  }
}while(1);
printf("End at odd number");

   return 0;
}