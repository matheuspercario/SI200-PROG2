#include <stdio.h>
#include <stdlib.h>


int main () {
  int num;
  
  printf("Digite um numero:	\n");
  scanf("%d", &num);
  
  FILE *arquivo;
  if ((arquivo = fopen("texto.txt", "wt")) == NULL){
    printf("Error opening file");
    exit(1);
  }
  
  fprintf(arquivo, "%d", num); // **obs: em "FPRINTF" tiramos o "&" de num. Compare com os outros códigos...
  printf("Escrita realizada com sucesso!\n\n");
  fclose (arquivo);
  return 0;
}
