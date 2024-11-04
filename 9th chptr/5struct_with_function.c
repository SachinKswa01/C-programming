#include<stdio.h>
#include<string.h>

//user defined:
struct student {
    int roll;
    float cgpa;
    char name[10];  

};
void printinfo(struct student s1);

int main(){
    struct student s1 ={11, 1.1, "ak"};
   
    printinfo(s1);
    // we change the value in call by value.
    s1.roll = 33;
    printf("student roll = %d\n", s1.roll);

    return 0;

}
void printinfo(struct student s1){
    printf("student information : \n");
    printf("student roll = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);
    printf("student name = %s \n", s1.name);

}
