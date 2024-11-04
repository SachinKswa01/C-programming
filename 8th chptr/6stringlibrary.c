#include<stdio.h>
#include<string.h>          // string library

int main(){


// string length = 'strlen'
    char name[] = "programming";
    int length = strlen(name);          //'strlen' = string length !....one good thing is that it is auto count length without count null charactor.
    printf("name length is : %d \n", length);


// string copy = 'strcpy'
    char oldStr[]= "RAM RAM JI";
    char newStr[]= "Good morning";
    strcpy(newStr, oldStr);             //'strcpy(a, b)' is work to change one string to another. change the value of a into b.
    printf("string copy is :");puts(newStr);                       // 'newStr' = goodmorning..but by strcpy it is change by 'oldStr'.


// string concatenation ='srtcat'
    char first[100] = "hello ";
    char second[]= "world";
    strcat(first, second);              //'strcat(a, b)= "string concatenation" !.... means two different strings are joint together and make one new string that cantain old strings words together.
    printf("string concatenation is :");puts(first);


// string comparision = 'strcmp'
    char one[]= "APPLE";                //ASCII of 'A' = 65;
    char two[]= "BANANA";               //ASCII of 'B' = 66;
    printf("string comparision is: %d \n", strcmp(one, two));  //'strcmp' = comparision b/w two string of different letter... when one string is smaller then two then it gives negative value...but when one is greater then gives positive value.
    char three[]= "aaab";
    char four[] = "aaac";
    printf("string comparision is: %d \n", strcmp(four, three));


    return 0;

}