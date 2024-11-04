#include<stdio.h>

int main(){
   char abcd;
   printf("enter ur alphabates ");
   scanf("%c", &abcd);

   if(abcd<97){
    printf("capital");
   }else{
    printf("small");
   }
    return 0;
}