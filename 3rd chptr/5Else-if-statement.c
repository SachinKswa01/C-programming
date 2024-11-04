#include<stdio.h>

int main(){
    int marks;
    printf("enter ur number");
    scanf("%d", &marks);
   
   if(marks <=100 && marks >=90){
    printf("A+ \n");
   } else if(marks<90 && marks >=70){
      printf("A \n");
   } else if(marks< 70 && marks >=30){
      printf("B \n");
   }else if(marks< 30 && marks >=0){
      printf("C \n");
   }else{
      printf("wrong number \n");
   }
    return 0;
}