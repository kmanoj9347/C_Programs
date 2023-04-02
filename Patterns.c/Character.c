#include <stdio.h>
int main () {
    int i,j;
    int rows =5;
    //taking first character of alphabet
    char character ='A';
    //first for loop is used to identify number rows
    for( i =0 ;i <rows;i++){
        //second for loop is used to identify number 
       //of columns based on the rows
       for( j =0; j<=i; j++){
        printf("%c ",character);
       }
       printf("\n");
       //incrementing character value so that it
       // will print the next character
       character++;
    }
    return 0;
}