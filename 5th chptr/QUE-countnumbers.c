#include<stdio.h>
int SoD(int x);

int main(){
int a =345;
    SoD(a);
    return 0;
}

int SoD(int x){
    int count =0;
    for(int i=0; i<=x; i++){
        count += i% 10;
        x /=10;
    } printf("%d", count);

    return count;
}