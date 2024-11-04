#include<stdio.h>

int main(){
    // print user name and length?

    char name[50];
    printf("enter ur name: ");
    fgets(name, 50, stdin);
    puts(name);
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    printf("ur name's length is : %d", count-1);
    return 0;

}