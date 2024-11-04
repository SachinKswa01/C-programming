#include<stdio.h>

int main(){
   int a = 33; float b = 32.4; char ch = 'd';
    int *ptr = &a; float *ptrr = &b; char *pttrr = &ch;
    printf("integer = %u  and float = %u and char = %u \n", ptr, ptrr, pttrr);
    ptr++; ptrr++; pttrr++;                            //pointer ++ means it add one data type... here we use int so it add 4 bytes in its address.
    printf("integer = %u  and float = %u and char = %u \n", ptr , ptrr, pttrr);
    ptr--; ptrr--; pttrr--;                         //pointer -- means it subtract one data type....so here it subract 4 bytes from address.
    printf("integer = %u  and float = %u and char = %u \n", ptr, ptrr, pttrr);

    printf("integer have one data type is 4 bytes \n");
    printf("float have one data type is 4 buytes \n");
    printf("char have one data type is 1 byte  \n");

 return 0;
}