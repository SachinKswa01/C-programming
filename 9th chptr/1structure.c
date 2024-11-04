#include<stdio.h>
#include<string.h>

//structure : user defined
struct student{
    int roll;
    float cgpa; 
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 29;
    s1.cgpa = 8.3;
    //s.1name = "Sachin";           // cancel it because we can not change a string or array..we only change the pointer. so we define this with 'strcpy'.
    strcpy(s1.name, "Sachin");

    printf("student name = %s \n", s1.name);
    printf("student roll number = %d \n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);

    return 0;
}