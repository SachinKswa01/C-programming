#include<stdio.h>
#include<string.h>
int studentstructur(int rollno, float cgpas, char names[]);

//structure : user defined
struct student{
    int roll;
    float cgpa; 
    char name[100];
};

// store the data of 3 students with using function.
int main(){
    int rollno1, rollno2, rollno3; 
    printf("Roll number: \n");
    scanf("%d", &rollno1);
    scanf("%d", &rollno2);
    scanf("%d", &rollno3);
    char names2[100], names1[100], names3[100];
    printf("Name: \n");
    scanf("%s", &names1);
    scanf("%s", &names2);
    scanf("%s", &names3);
    float cgpas2, cgpas1, cgpas3;
    printf("cgpa: \n");
    scanf("%f", &cgpas1);
    scanf("%f", &cgpas2);
    scanf("%f", &cgpas3);
    
    studentstructur(rollno1, cgpas1, names1);
    studentstructur(rollno2, cgpas2, names2);
    studentstructur(rollno3, cgpas3, names3);

     return 0;
}

int studentstructur(int rollno, float cgpas, char names[]){
    struct student s1;
    s1.roll = rollno;
    s1.cgpa =cgpas;
    //s.1name = "Sachin";           // cancel it because we can not change a string or array..we only change the pointer. so we define this with 'strcpy'.
    strcpy(s1.name, names );

    printf("student name  = %s \n", s1.name);
    printf("student rollno= %d \n", s1.roll);
    printf("student cgpa  = %f \n", s1.cgpa);

    return 0;
}