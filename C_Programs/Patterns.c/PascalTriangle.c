// tp print pascal's Triangle using combination in 
// 0(n^2) time and 0(1) extra space function.
#include <stdio.h>
void printPascal(int n){ 
    for (int line =1 ;line <=n;line++){
        //used to represent C(line ,i)
        int C= 1;
        for(int i =1; i <= line; i++){
            //The first value in a line is always 1
            printf("%d ", C);
            C =C*(line -i)/i;
        }
        printf("\n");
    }
}
int main()
{
    int n= 5;
    printPascal(n);
    return 0;
}