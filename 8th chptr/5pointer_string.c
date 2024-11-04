#include<stdio.h>

int main(){
    //string is also a  pointer.
    char* canchange = "hello world";        // pointer help us to change our words when we want.
    puts(canchange);
    canchange = "heyy";
    puts(canchange);

    // char canotchange[] ="hello wolrd";      // but when we use 'array notation([])' then we cannot change any word.
    // puts(canotchange);
    // canotchange = "hello";
    // puts(canotchange);
    return 0;

}