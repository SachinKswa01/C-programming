#include<stdio.h>

int main(){
    float price[3];
    printf("enter ur 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    printf("ur price with gst is : %f \n", price[0]+(0.18*price[0]));
    
    printf("ur price with gst is : %f \n", price[1]+(0.18*price[1]));
    
    printf("ur price with gst is : %f \n", price[2]+(0.18*price[2]));
 return 0;
}