#include<stdio.h>

int main(){
// continue statement ==skip only this statement.
//odd numbers b/w 5 to 50 by using continue.
for(int i=5; i<=50; i++){
  if(i%2 == 0){
    continue;
  }printf("%d ", i);
}
   return 0;
}