#include <stdio.h>
#include <math.h>
#include <stdlib.h>




//interval
int a; 
int b;

int cosine();
int sinusoid();

int main(){
// inputs
  printf("Define the start of the interval \n");
  scanf("%d", &a);
  printf("Define the end of the interval \n");
  scanf("%d",&b);


//Defining a null pointer for dynamic array
int *ptr = (int*)malloc(((b+1)-a) * sizeof(int)); //size of int is 4bytes

//checking proper memory allocation
if (ptr == NULL){
    printf("memory not allocated properly\n");
}
else{
  int k = 0;
 printf("memory allocated \n");
 for(int i = a; i<=b; ++i){
    ptr[k] = i;
    k++;
 }
 //printing for tests
 for(int i = 0; i<=(b-a); ++i){
  printf("ptr[%d] = %d\n", i, ptr[i]);
 }  
    
}
 
int cosine(){
  for(){

  }
  return 0;
}

 


free(ptr); //freeing allocated memory    
return 0;
}
