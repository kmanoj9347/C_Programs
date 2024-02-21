#include<stdio.h>
int main (){
int i,j,n;
pritnf("Input upto the table number starting from 1 : ");
scanf("%d",&n); 
printf("Multiplication table from 1 to %d \n",n);            
for(j=1;i<=10;i++){
    for(j=1;j<=n;j++){
        printf("%d*%d = %d, ",j,i,i*j);
    }
    printf("\n");
   }
}