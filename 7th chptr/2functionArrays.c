#include<stdio.h>
void printnumber(int *arr, int n);

int main(){
int arr[]= {1,23,4,5,6};
printnumber(arr, 5);
 return 0;
}

void printnumber(int *arr, int n){
    for (int i =0; i<n; i++ ){
        printf("%d \t", arr[i]);

    }
    printf("\n");
}