#include<stdio.h>

int main(){
    
    //area of circle= 3.24*r*r?
    float radius;
    printf("enter radius of circle: ");
    scanf("%f", &radius);
    float area_of_circle= 3.14*radius*radius;
    printf("the area is: %f", area_of_circle);

    return 0;
}
