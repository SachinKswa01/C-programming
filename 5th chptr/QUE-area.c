#include<stdio.h>
#include<math.h>
int AoS(int a);
float AoR(float a,float b);
float AoC(int radius);

int main(){
int a, b, radius;
printf("enter ur side a: ");
scanf("%d", &a);
printf("enter ur side b: ");
scanf("%d", &b); 
printf("enter ur radius: "); 
scanf("%d", &radius);

    printf("%d \n", AoS(a));;

    printf("%f \n", AoR(a, b));

    printf("%f \n", AoC(radius) );

return 0;
}

int AoS(int a){
    return a*a; 
}

float AoR(float a, float b){
    return a*b;
}

float AoC(int radius){
    return 3.14*radius*radius;
}