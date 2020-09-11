#include <stdio.h>
#include "dynamiclink.h"
int main(){
  int a  = 12;
  int b = 34;
  printf("SUM : %d\n",sum(a,b) );
  printf("SUB : %d\n",sub(a,b) );
  printf("MUL : %d\n",mul(a,b) );
  printf("DIV : %d\n",div(a,b) );
return 0;
}
