#include<stdio.h>
#include<stdlib.h>

//dynamic memory allocation = at the run time we make space for input more data.
//free() = to make free that function which is no longer to use.
int main(){
float *ptr;
 ptr = (float *) calloc(5 , sizeof(float));

 for(int i=0; i<5; i++){
    printf("%f \n", ptr[i]);
 }
free(ptr);
// here the uper calloc system is free (donot work any more); in below statement calloc work as new.
 ptr = (float *) calloc(2 , sizeof(float));
 for(int i=0; i<2; i++){
    printf("%f \n", ptr[i]);
 }

    return 0;
}