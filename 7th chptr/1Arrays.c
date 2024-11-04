#include<stdio.h>
//Array is also a pointer..
int main(){
 int marks[5]={95,84,98};       //store only similar data tyoes are stored.
 printf("english marks %d \n", marks[0]); // data is store continuesly in memory.
printf("maths marks %d \n", marks[1]);
printf("sci marks %d \n", marks[2]);
scanf("%d", &marks[3]);
scanf("%d", &marks[4]);
printf("marks in ss %d  \n in arts %d", marks[3], marks[4]);
 return 0;
}