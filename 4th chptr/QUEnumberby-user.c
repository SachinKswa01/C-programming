#include<stdio.h>

int main(){
    int s;
    int e;
    printf("enter ur number from where u want to start ");
    scanf("%d", &s);
    printf("enter the number where u want to end ");
    scanf("%d", &e);
    for(int i=s; i<=e; i++){
        printf("%d ", i);
    } printf("\n");

    int i=s;
    while(i<=e){
        printf("%d ", i);
        i++;
    }
    return 0;
}