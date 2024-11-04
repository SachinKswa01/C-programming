#include<stdio.h>

int main(){
    int age; 
    printf("enter ur age ");
    scanf("%d", &age);
 
    // ternary statement:
    age>= 18? printf("adult  \n") : printf("tin ager");
    
    return 0;
}