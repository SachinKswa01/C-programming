#include<stdio.h>

int main(){
 int x;
 printf("enter any number: ");
 scanf("%d", &x);
 printf("%d", x%2==0);
 printf("If 1 then even, if 0 then Odd");
 return 0;
}