#include<stdio.h>
#include<string.h>

typedef struct bankaccount{
    int accountNo;
    char name[15];

}acc;

int main(){
   acc acc1 = {3299001, "sachin"};
   acc acc2 = {3299002, "ankit"};
   acc acc3 = {3299003, "jaitn"};

   printf("acc no = %d \n", acc1.accountNo);
   printf("name = %s \n", acc1.name);


   printf("acc no = %d \n", acc2.accountNo);
   printf("name = %s \n", acc2.name);
   
   printf("acc no = %d \n", acc3.accountNo);
   printf("name = %s \n", acc3.name);
   
   return 0;
}