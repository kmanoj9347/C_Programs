#include<stdio.h>

int main(){
    void sum();
    sum();
    return;

}
void sum(){
    int a = 3, b =7,sum =0;
    sum = a+b;
    printf("sum=%d\n",sum);
}