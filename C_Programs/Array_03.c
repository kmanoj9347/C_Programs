#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 of elements : ");
    for(int i =0;i<5;i++){
        scanf("%d ",&arr[i]);
        }
        printf("Displaying integrs: ");
    for (int i =0;i <5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}