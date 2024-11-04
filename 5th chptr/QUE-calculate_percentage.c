#include<stdio.h>
#include<math.h>
float percent(int sci, int math , int eng);
int main(){
 int s;
 int m; int e;
 printf("enter ur marks in scinece: ");
 scanf("%d", &s);
  printf("enter ur marks in math: ");
 scanf("%d", &m);
  printf("enter ur marks in english: ");
 scanf("%d", &e);
 printf("%f \n", percent(s, m, e));
 return 0;

}

float percent(int sci , int math, int eng){
    int percentage = ((sci + math + eng) * 100)/ 300;
    return percentage;
}

   
