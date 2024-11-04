#include<stdio.h>

int main(){
    int marks[3][4];
    marks[0][0] = 80;
     marks[0][1] = 70;
      marks[0][2] = 60;
       marks[0][3] = 50;

    marks[1][0] = 81;
     marks[1][1] = 82;
      marks[1][2] = 83;
       marks[1][3] = 84;

    marks[2][0] = 85;
     marks[2][1] = 86;
      marks[2][2] = 87;
       marks[2][3] = 88;

     for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){;
        printf("%d ", marks[i][j]);
         } printf("\n");
     }
return 0;

}