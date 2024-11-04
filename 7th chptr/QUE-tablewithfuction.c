#include<stdio.h>
void tables(int arr[][10], int x, int y, int number);

int main(){ 
int table[2][10];
tables(table, 0, 10, 2);
tables(table, 1, 10, 3);

for(int i=0 ;i<10; i++){
    printf("%d \n", table[0][i]);
}
printf("\n");

for (int i=0; i<10; i++){
    printf("%d \n", table[1][i]);
}
printf(" \n");

    return 0;
}

void tables(int arr[][10], int x,int y, int number){
    for(int i=0; i<=y; i++){
     arr[x][i] = number * (i+1);
    }
}