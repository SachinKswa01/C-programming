#include<stdio.h>
void stringfunction(char arr[]);

int main(){
    char firstname[]= "Sachin";
    char lastname[]= "Kaswan";

    stringfunction(firstname);
    stringfunction(lastname);
    return 0;
}

void stringfunction(char arr[]){
    for(int i  = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);

    }printf(" ");
}