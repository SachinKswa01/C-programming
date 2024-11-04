#include<stdio.h>

int main(){
    int day; 
    printf("enter ur day number between 1 to 7: ");
    scanf("%d", &day);
 
    //switch statement:
    switch(day){
        case 1: printf("moday \n");
        break;
        case 2: printf("tusday \n");
        break;
        case 3: printf("wednesday \n");
        break;
        case 4: printf("thursday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("saturday \n");
        break;
        case 7: printf("sunday \n");
        break;
    }
    return 0;
}