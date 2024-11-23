#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//interval
int a; 
int b;

//selector
int slct;

void cosine(int *prt);
//void sinusoid(int *prt);
int FillInt(int *ptr);

int main(){
 int *ptr;

// inputs
  printf("Define the start of the interval \n");
  scanf("%d", &a);
  printf("Define the end of the interval \n");
  scanf("%d",&b);
  printf("What would ou like to print\n1. Cosine Function\n2. Sine Function");
  scanf("%d",&slct);


  //allocating a memory block for ptr
  ptr = (int*)malloc(((b+1)-a) * sizeof(int));
  if (ptr == NULL){
    printf("memory not allocated properly\n");
    return 1;
}
  FillInt(ptr);

switch (slct)
{
case 1:
  cosine(ptr);
  break;
//\case 2:
 //sinusoid(ptr);
 //break;

default:
printf("Invalid selection");
break;
free(ptr);
return 0; 

}

}

//passing the address block so that it can modify it
int FillInt(int *ptr){

//checking proper memory allocation
 printf("memory allocated \n");
 int k = 0;
 for(int i = a; i<=b; ++i){
  
    ptr[k] = i;
    k++;
 }
 //printing X values
 for(int i = 0; i<=(b-a); ++i){

//shallow copy of the pointer
 int *x = ptr;  


  printf("x[%d] = %d\n", i, x[i]);
 }  
   return 0;
 
}


 
void cosine(int *ptr){
  for(int i = 0; i<=(b-a); ++i){
   printf("cos(%d) = %.2f\n", ptr[i], cos(ptr[i]));
  
  }
}

 





