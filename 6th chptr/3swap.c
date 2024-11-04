#include<stdio.h>
int swap(int *a, int *b);
 
int main(){
   int  x=4, y = 7;
   swap(&x, &y);
   printf("x =%d & y = %d", x, y);
    return 0;
}
int swap(int *a, int *b){
  int t = *a; 
  *a = *b; 
  *b = t;

}
                    