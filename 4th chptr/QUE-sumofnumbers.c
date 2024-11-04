#include<stdio.h>

int main(){
    //sum of all numbers b/w 5 and 50 including these?
    
    int sum=0;

    for(int i=5; i<=50; i++){
        sum= sum+i;
    } printf("sum of 5 to 50 is: %d", sum);

   return 0;
}