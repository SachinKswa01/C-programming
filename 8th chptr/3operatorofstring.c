#include<stdio.h>

int main(){
    int name[20];
    printf("enter ur name");
    scanf("%s", &name);             //"%s" is specialy use for strings. it is auto take '\0' for string.
    printf("ur name iks %s", name);
    return 0;
}