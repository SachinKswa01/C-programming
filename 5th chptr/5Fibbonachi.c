#include<stdio.h>
#include<math.h>
int fibbo(int n);

int main(){
int x; 
printf("enter ur fibbo number: ");
scanf("%d", &x);
printf("ur fibbonachi number is: %d", fibbo(x));
return 0;
}

int fibbo(int n) {
    if(n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }
    int fibboNm1 = fibbo(n - 1);
    int fibboNm2 = fibbo(n - 2);
    int fibboN = fibboNm1 + fibboNm2;
    return fibboN;
}
