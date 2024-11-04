#include<stdio.h>
#include<string.h>
int checkchar(char ch, char str[]);

int main(){
char str[]= "Hello brother";
printf("write a character that u want to check: ");
char ch;
scanf("%c", &ch);
 checkchar(ch, str);
 return 0;
}

int checkchar(char ch, char str[]){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("charactor is present!");
            return 0;
        }
    } 
    printf("charactor is not present!");
}
