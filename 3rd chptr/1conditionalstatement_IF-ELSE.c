#include<stdio.h>

int main(){
    int age; 
    printf("enter ur age ");
    scanf("%d", &age);

    // IF-ELSE statement:
    if(age > 18){
        printf("u r adult  \n");
    }else{
        printf("u r tin ager \n");
    }
    return 0;
}