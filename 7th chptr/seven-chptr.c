#include<stdio.h>

int main(){ 
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int newelement;scanf("%d", &newelement);
    arr[11]= newelement;
    
    for(int i=0; i<= 11; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}