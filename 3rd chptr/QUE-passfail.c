#include<stdio.h>

int main(){
    int marks;
    printf("enter ur number");
    scanf("%d", &marks);
    if(marks >30 && marks <=100){
        printf("pass \n");
    }else if(marks<=30 && marks >=0){
        printf("fail \n");
    }else{
        printf("wrong number \n");
    }
    return 0;
}