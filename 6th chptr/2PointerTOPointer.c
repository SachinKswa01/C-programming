#include<stdio.h>
 
int main(){
    int i= 9;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}
                    