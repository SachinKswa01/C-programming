#include<stdio.h>
#include<string.h>

//user defined:
struct student {
    int roll;
    float cgpa;
    char name[10];  

};

int main(){
    struct student ece[10];
    ece[0].roll = 22;
    ece[0].cgpa = 22.2;
    strcpy(ece[0].name, "sachin");

    printf("name = %s\n ",ece[0].name);

// initialization structure:
    struct student s1 ={44, 88.8,"Ram"};       // short method for structure.`
    printf("student name = %s\n", s1.name);
    return 0;
}
