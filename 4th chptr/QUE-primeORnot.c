#include<stdio.h>

int main(){
    // prime or not?
int n;
printf("enter ur number: ");
scanf("%d", &n);
for(int i=1; i<=100; i++){
    if(n%i == 0){
        printf("not prime");
        break;
    }else{
        printf("prime");
        break;
    }
}
   return 0;
}