#include<stdio.h>
#include<string.h>

//find real number and imagenary number?

struct complex{
    int real;
    int img;

};

int main(){
    struct complex number1 = {8, 5};
    struct complex *ptr = &number1;
    printf("real number is: %d \n", ptr->real);
    printf("imaginary number is: %d \n", ptr->img);
    return 0;
}