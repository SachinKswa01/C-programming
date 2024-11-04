#include<stdio.h>
#include<string.h>        

int main(){
// take string input from user using %c.
    char str[50];
    char ch;
    int i = 0;
    
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    
    return 0;

}