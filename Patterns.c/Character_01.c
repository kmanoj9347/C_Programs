// character pattern by converting number into character
#include <stdio.h>
int main() {
    int i = 1,j = 0;
    //input entering number of rows
    int rows =5;
    int number =65;
    while (i <=rows){
        while( j <=i-1){
            //converting number into character
            char character =(char)(number);
            printf("%c ",character);
            j++;
        }
        printf("\n");
        number++;
        j=0;
        i++;
    }
    return 0;
}