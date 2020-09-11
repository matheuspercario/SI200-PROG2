#include <stdio.h>
#include <stdlib.h>


int main () {
  int num;
  
  FILE *arquivo;
  if ((arquivo = fopen("texto.txt", "rt")) == NULL){
    printf("Error opening file");
    exit(1);
  }
  
  fscanf(arquivo, "%d", &num);
  printf("Valor de n =	%d\n\n", num);
  
  printf("Leitura realizada com sucesso!\n\n");
  fclose (arquivo);
  
  return 0;
}
