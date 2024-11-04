#include<stdio.h>

int main(){
  int n;
  printf("enter ur number: ");
  scanf("%d", &n);

  for(int i=n; i<=n*10; i+=n){
    printf("%d ", i);
  }

  /*  //method 2.
  for(int i=n; i<=10 ;i++){
  printf("%d", n*i)
  }*/
    return 0;
}