#include<stdio.h>

int main(){
int table[4];

int *ptr = &table[0];
for(int i=0; i<4; i++){
    printf("%d index : ", i);
    scanf("%d", (ptr+i));
}
for(int i=0; i<4; i++){
    printf("%d index = %d \n", i, *(ptr+i));
}

 return 0;
}