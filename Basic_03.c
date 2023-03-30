// Sum and Average of 10 given numbers.
#include<stdio.h>
void main (){
    int  n,sum=0;
    float avg;
    printf("Enter 10 numbers : \n");
    for(int i=1;i<=10;i++){
        printf("Number-%d :",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg =sum/10.0;
    printf("\nSum of 10 numbers is : %d\n The Average is : %f\n",sum,avg);
}