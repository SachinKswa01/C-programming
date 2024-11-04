#include<stdio.h>

int main(){
// to add some data in file: 
    FILE *fptr;
    fptr = fopen("hey.txt", "a");

    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 's');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 't');
    fprintf(fptr, "%c", 'e');
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