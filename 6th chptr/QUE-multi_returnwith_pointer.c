#include<stdio.h>
void arithmatic(int a, int b, int *sum, int *prod, float *avg);
 
int main(){
int a=3; int b= 2;
int sum, prod; float avg;
arithmatic(a,b, &sum, &prod, &avg);
printf("sum= %d & prod = %d, avg =%f", sum, prod, avg);
return 0;

}

void arithmatic(int a, int b, int *sum, int *prod, float *avg) {
  *sum = a + b;
  *prod = a * b;
  *avg =  (a+b)/2;
}