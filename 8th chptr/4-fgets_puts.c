#include<stdio.h>

int main(){
    // get full name from user.
    char fullName[50];
    printf("enter ur full name ");
    // scanf("%s", fullName);       //here 'scanf' do not work because it can only print one word without space.
    fgets(fullName, 50, stdin);     //it take input.    // by this we print all string with space or not. and it  is secure better then "gets()".
    puts(fullName);                 //it gives output.

    return 0;

}