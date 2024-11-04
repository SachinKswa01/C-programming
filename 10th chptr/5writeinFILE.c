#include<stdio.h>

int main(){
// to write new data in file: 
    FILE *fptr;
    fptr = fopen("hey.txt", "w");

    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 't');
    fprintf(fptr, "%c", 'e');
// one another method to write some data in file; to run this method2 please comment down the upper method.
    fputc('R', fptr);
    fputc('A', fptr);
    fputc('M', fptr);
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