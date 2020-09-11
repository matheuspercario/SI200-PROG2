#include <stdio.h>


int sum(int a, int b){
   return a + b;
}

int sub(int a, int b){
   return a - b;
}

int div(int a, int b){
  if(b == 0){
    printf("It is not capable to divide by zero for now ...\n");
    
  }
   return a / b;
}

int mul(int a, int b){
   return a * b;
}
