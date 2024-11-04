#include<stdio.h>

int main(){
  //relative operators:
  printf("relative operators: \n");
  printf("%d \n", 4==4);
  printf("%d \n", 4<=3);
  printf("%d \n", 4>=4);
  printf("%d \n", 4!=4);
  printf("%d \n", 4>4);
  printf("%d \n", 4<4);
 
 //logical operator:
printf("logical operators: \n");
 printf("%d \n", 4==4 && 3==2);     //and operator
 printf("%d \n", 4==4 || 3==2);     // or operator
 printf("%d \n", !(4==4));          // not operator
 return 0;
}