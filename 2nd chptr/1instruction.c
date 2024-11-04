#include<stdio.h>

int main(){
    //type declaration instructions: --> Declare var before using it !
    int a = 2;      // ✓
    int b = a;      // ✓
    int c = b+1;    // ✓
    int d = 1, e;   // ✓
    int a, b, c;
    a=b=c=1;         // ✓

    int a=b=c=1;       //✕        because we canot use and declare in the same time or same line.

}