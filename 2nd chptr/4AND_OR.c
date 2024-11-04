#include<stdio.h>

int main(){
 int is_sunday =1;
 int is_snowing =1;
 printf("%d \n", is_snowing && is_sunday);      //and operator then both are requre true.
 int is_monday =1;
 int is_raining =0;
 printf("%d", is_monday || is_raining);         // or operator then at least one is require true.
 return 0;
}