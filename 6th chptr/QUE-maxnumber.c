#include<stdio.h>
 
int main(){
  int x =4;
  int y=20;
  int* a = &x;
  int* b  = &y;
  if(*a> *b){
  printf("%d", *a);
  }else{
    printf("%d", *b);
  }
}