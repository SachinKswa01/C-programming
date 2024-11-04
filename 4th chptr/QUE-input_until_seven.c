#include<stdio.h>

int main(){
  //Break statement.
  // input until enters a multiple of 7.
int n;

for(;;){    //infinite loop.
printf("enter ur number: ");
scanf("%d", &n);
printf("%d \n",n);

if(n%7 == 0){
  break;

}
}printf("end");
   return 0;
}