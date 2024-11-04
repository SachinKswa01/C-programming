#include<stdio.h>
#include<stdlib.h>

//dynamic memory allocation = at the run time we make space for input more data.
//calloc = continue allocation:  = to give contionue storage and when nothing to store then give null (zero) in storage.
int main(){
float *ptr;
 ptr = (float *) calloc(5 , sizeof(float));

 for(int i=0; i<5; i++){
    printf("%f \n", ptr[i]);
 }

    return 0;
}