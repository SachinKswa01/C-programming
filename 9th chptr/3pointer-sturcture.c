#include<stdio.h>
#include<string.h>

//user defined:
struct student {
    int roll;
    float cgpa;
    char name[10];  

};

int main(){
// initialization structure:
    struct student s1 ={44, 88.8,"Ram"};       // short method for structure.`
    printf("student name = %s\n", s1.name);

//structure pointer
    struct student *ptr =&s1;                   //it take full s1 structer in pointer.
    printf("student roll %d \n", (*ptr).roll);
    return 0;
}
