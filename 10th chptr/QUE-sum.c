#include<stdio.h>

int main(){
// to make sum of entered file data.
    FILE *fptr;
    fptr = fopen("sum.txt", "r");

    int x;
    fscanf(fptr, "%d", &x);
    int y;
    fscanf(fptr, "%d", &y);

    fclose(fptr);
    
    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", x + y);
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