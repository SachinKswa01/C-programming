#include<stdio.h>
#include<string.h>

//user defined:
typedef struct student {        //by "typedef" we make a name that we want.
    int roll;
    float cgpa;
    char name[10];  
} stu;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[10];

} coe;

int main (){
    coe s1;
    s1.roll = 22;
    s1.cgpa = 33.3;
    strcpy(s1.name, "dk");

    printf("roll no. %d \n", s1.roll);
    printf("name %s \n", s1.name);
    printf("cgpa %f \n", s1.cgpa);
    return 0;

}