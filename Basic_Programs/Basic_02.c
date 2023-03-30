#include<stdio.h>
void main(){
    int  n,sum =0;
    printf("Input Values of terms: ");
    scanf("%d",&n);
    printf("\nThe first %d natural number is : \n",n);
for(int i =1;i<=n;i++){
    printf("%d ",i);
    sum =sum+i;
}
printf("\nThe sum of natural numbers upto  %d terms : %d \n",n,sum);
}