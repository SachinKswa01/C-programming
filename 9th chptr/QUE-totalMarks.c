#include<stdio.h>
#include<string.h>

int main(){
    // store marks of 5 student in class.
    float marks[5];
    printf("enter total marks of 5 students: \n");
    printf("1 --> ");
    scanf("%f", &marks[0]);
    printf("2 --> ");
    scanf("%f", &marks[1]);
    printf("3 --> ");
    scanf("%f", &marks[2]);
    printf("4 --> ");
    scanf("%f", &marks[3]);
    printf("5 --> ");
    scanf("%f", &marks[4]);
    
    printf("marks of students is: %f, %f, %f, %f, %f", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}