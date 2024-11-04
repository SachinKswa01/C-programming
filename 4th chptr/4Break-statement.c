#include<stdio.h>

int main(){
  //Break statement.
  for(int i=0; i<=8; i++){
    if(i == 6){
      break;        //used for run out from loop where we use break statement.
    }printf("%d ", i);
  }
  printf("end");
    return 0;
}