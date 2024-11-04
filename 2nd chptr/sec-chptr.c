#include<stdio.h>

int main(){
int a,b,c;
printf("enter number a");
scanf("%d",&a);
printf("enter number b");
scanf("%d",&b);
printf("enter number c");
scanf("%d",&c);
int x= a>b || a>c && b>a || b>c && c>a || c>b;

printf("%d", x);
// pritnf("%d",  );
// pritnf("%d", ); //&& b>a || b>c && c>a || c>b);

return 0;
}