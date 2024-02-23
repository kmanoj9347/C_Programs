// #include<stdio.h>
// int main(){
//   int j,sum=0;
//   printf("The first 10 natural number is : \n");
//   for (j =1;j <=10;j++){
//   sum =sum +j;
//   printf("%d ",j);  
//   }
//   printf("\nThe sum is : %d\n",sum);
// }

#include<stdio.h>
void main()
{
int n= 11;
for(int i = 0; i < n; i++){
    for(int j = 0; j <n; j++){
        if(i==n-1 || i ==n/2){
            printf("%d ",1);
    }
    else{
        printf(" ");
    }
printf("\n");
    }
}
}

