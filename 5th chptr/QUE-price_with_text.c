#include<stdio.h>
 int clculateprice(float x);

int main(){
 float x;
 printf("enter ur price: ");
 scanf("%f", &x);

clculateprice(x);
return 0;
}

int clculateprice(float x){
    x = x + (0.10* x);
    printf("taxed price is : %f", x);
}

