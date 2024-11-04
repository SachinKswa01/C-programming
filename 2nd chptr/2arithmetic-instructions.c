#include<stdio.h>

int main(){
   //operator precedence: 
   '*', '/', '%'    //these are at first.
        |
        v
     '+', '-'         //these have 2nd precedence.
        |
        V
       '='

--> 5+2/2*3     // firstly solve " / " then left to right rule and solve " * " and then solve " + " == 8.

    //Associativity ( for same precedence):

--> left to right;
  5*2/2*3       // start from left and solve == 15.

}