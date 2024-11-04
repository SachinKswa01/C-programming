#include<stdio.h>

int main(){
   int rows= 4;
   int cols= 5;
   for(int i=0; i<rows; i++){
  
    for(int j=0;j<cols; j++){
        printf("* ", j);
     }  printf("\n", i);
   }
   return 0;
}