#include<stdio.h>
#include<math.h>
float CtoF(float celsius);

int main(){
    float x;
    printf("enter ur temp: ");
    scanf("%f", &x);
    printf(" celisius to farenite is :  %f", CtoF(x));
    return 0;
    
}

float CtoF(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far; 
}
