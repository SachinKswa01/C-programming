#include<stdio.h>
void indian();
void french();

int main(){
    char ch;
    printf("enter i for indian or f for french \n");
    scanf("%c", &ch);
   
    if(ch == 'i'){
        indian();
    }else
    {
        french();
    }
}
void indian(){
    printf("RAM RAM jiii \n");
}
void french(){
    printf("bonjour \n");
}