#include<stdio.h>

int main(){
// continue statement ==skip only this statement.
for(int i=0; i<=5; i++){
  if(i== 3){
    continue;
  }printf("%d ", i);
}
   return 0;
}