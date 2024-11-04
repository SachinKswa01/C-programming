#include<stdio.h>
void hello();
void goodbye();

int main(){
    hello();
    goodbye();
    goodbye();
    hello();
}

void hello(){
    printf("hello \n");
}
 
 void goodbye(){
    printf("good bye \n");
 }