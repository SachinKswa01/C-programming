#include<stdio.h>

int main(){
int a,b,c;
printf("enter number a ");
scanf("%d", &a);
printf("enter number b ");
scanf("%d", &b);
printf("enter number c ");
scanf("%d", &c);
int avg= (a+b+c)/3;
printf("the avarage is: %d", avg);
return 0;
}