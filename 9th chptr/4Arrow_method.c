#include<stdio.h>
#include<string.h>

//user defined:
struct student {
    int roll;
    float cgpa;
    char name[10];  

};

int main(){
// initialization method:
    struct student s1= {11, 2.3, "sk"};
    printf("student roll no. = %d \n", s1.roll);

// pointer method:
    struct student *ptr = &s1;
    printf("student roll no. =%d \n", (*ptr).roll);

// Arrow method:
    printf("student roll =  %d \n", ptr->roll);
    printf("student name =  %s \n", ptr->name);

    return 0;

}
