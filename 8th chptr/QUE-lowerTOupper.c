#include<stdio.h>
#include<string.h>
void lowertoupper(char str[]);

int main(){
    char str[]="sachin";
    lowertoupper(str);
    return 0;
}

void lowertoupper(char str[]){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
    puts(str);
}
