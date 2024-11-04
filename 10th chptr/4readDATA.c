#include<stdio.h>

int main(){
// to read the data of file: 
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    char ch;
    fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c", &ch);
    printf("character = %c\n", ch);

    int x;
    fscanf(fptr, "%d", &x);
    printf("number = %d \n", x);
    fscanf(fptr, "%d", &x);
    printf("number = %d \n", x);
    fscanf(fptr, "%d", &x);
    printf("number = %d \n", x);
    fscanf(fptr, "%d", &x);
    printf("number = %d \n", x);

//one another method to read =  fgetc(fptr);
    printf("character = %c \n", fgetc(fptr));
    printf("character = %c \n", fgetc(fptr));
    printf("character = %c \n", fgetc(fptr));
    printf("character = %c \n", fgetc(fptr));
    
    fclose(fptr);
    
    return 0;
}

/*
"r" = open to read file; (it only open existis file)
"rb" = open to read in binary file;
"w" = open to write file; (we can wirte but all the old data of file is delete )...(when u enter non existing in this then it make that new file)
"wb" = open to write in binary;
"a" = open to append ( to write with old data of file).
*/