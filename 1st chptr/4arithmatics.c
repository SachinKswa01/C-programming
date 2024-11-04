#include<stdio.h>
int main(){
  int a,b;
  printf("enter number A: ");
  scanf("%d", &a);
   printf("enter number B: ");
  scanf("%d", &b);
   int sum= a+b;
   int product = a*b;
   int divid = a/b;
   int subtract = a-b;
   int remender= a%b;
   printf("sum of a & b is: %d \n", sum);
    printf("product of a & b is: %d \n", product);
     printf("divid of a & b is: %d \n", divid);
      printf("subtract of a & b is: %d \n", subtract);
       printf("ur remender of a & b is: %d \n", remender);
    return 0;
}