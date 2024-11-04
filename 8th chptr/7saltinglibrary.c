#include<stdio.h>
#include<string.h>
void salting(char pswrd[]);     //salting means your input string is change by adding some words.

int main(){
    char pswrd[100];
    scanf("%s", pswrd);
    salting(pswrd);
    return 0;
}

void salting(char pswrd[]){
    char salt[] = "123";
    char newpswrd[200];

    strcpy(newpswrd, pswrd);
    strcat(newpswrd, salt);
    puts(newpswrd);

}