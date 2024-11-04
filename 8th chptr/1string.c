#include<stdio.h>

int main(){
    char name[]= {'p','r','o','g','r','a','m','m','i','n','g','\0'};     // it is string with chracators. in last "\0" this is "null characator" is caplusary to male a word.
    char name1[]= "programming";       // it is also a string in this we use double codes that are make it word without "\0".
    printf("%s \n", name);
    printf("%s \n", name1);
    return 0;
}