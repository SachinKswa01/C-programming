#include<stdio.h>
#include<stdlib.h>

//dynamic memory allocation = at the run time we make space for input more data.
//aloocate memrory to store 5 prices ?
int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));

    ptr[0]=  100;
    ptr[1] = 200;
    ptr[2] = 300;
    ptr[3] = 400;
    ptr[4] = 500;

    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}