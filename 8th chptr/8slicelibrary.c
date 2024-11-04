#include<stdio.h>
#include<string.h>
//slice(string, starting number, ending number). Also a library:

void slice(char str[], int n, int m);

int main(){
    char str[]= "GoodMOrning";
    slice(str, 4, 8);           // slice means cut the word from where u want. string starting from 0 so count from 0 to cutting number.
    return 0;
}

void slice(char str[], int n, int m){
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++ , j++){
        newstr[j] = str[i];

    }
    newstr[j]= '\0';
    puts(newstr);
}