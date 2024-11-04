#include<stdio.h>
#include<stdlib.h>

//dynamic memory allocation = at the run time we make space for input more data.
//realloc() = re allocate memory means a memory has increase or decrease some space.
int main(){
int *ptr;
ptr = (int *) calloc(5 , sizeof(int));

printf("enter number(5): ");
 for(int i=0; i<5; i++){
   scanf("%d", &ptr[i]);
 }

ptr = realloc(ptr, 8);
printf("enter number(8): ");
for(int i=0; i<8; i++){
   scanf("%d", &ptr[i]);
}

//print
 for(int i=0; i<8; i++){
   printf("number %d is %d", i, ptr[i]);
 }
   return 0;
}