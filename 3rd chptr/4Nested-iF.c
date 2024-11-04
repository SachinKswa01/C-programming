#include<stdio.h>

int main(){
    int x;
    printf("enter ur number");
    scanf("%d", &x);
    if(x>=0){
        printf("positive \n");
        if(x%2 == 0){
            printf("even \n");
        }else{
            printf("odd \n");
        }
    }else{
        printf("negative \n");
    }
    return 0;
}