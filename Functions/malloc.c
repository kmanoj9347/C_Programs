#include <stdio.h>
#include <stdlib.h>
int main() {
    // This pinter will hold the base
    //address of the block
    int* ptr;
    int n,i;
    //getting the number of elements for the array
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n",n);
     //Dynamically allocating memory using malloc()
     ptr =(int*)malloc(n * sizeof(int));
      // chcking if hte memory has been succesfully 
      // allocated by malloc or not
      if (ptr == NULL){
        printf("Memory not allocated.\n");
        exit(0);
      }
    else{
        printf("Momory succesfully allocaed using malloc.\n");

        //get the elemnets of the array
        for(i = 0 ; i <n; ++i) {
            ptr[i] == i + 1;
        }
          printf("The elements of the array are: ");
          for(  i = 0 ; i < n ; ++i){
            printf("%d, ",ptr[i]); 
    }
}
return 0;
}