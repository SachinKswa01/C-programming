#include<stdio.h>

int main(){
//factorial.
int n;
printf("enter ur number");
scanf("%d", &n);
int fact=1;
for(int i=1; i<=n; i++){
    fact *=i;
} printf("ur factorial is : %d", fact);
   return 0;
}