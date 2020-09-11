/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 3 - Escreva uma função C que receba como parâmetro duas variáveis inteiras e "zere" o valor dessas variáveis. */
#include <stdio.h>


/* ----------------------------------------------------------------- 
FUNÇOES 
-------------------------------------------------------------------*/
void zerador_int (int *A)
{
	*A = 0;
}

void zerador_float (float *B)
{
	*B = 0.0;
}

/* ----------------------------------------------------------------- 
FUNÇAO PRINCIPAL
-------------------------------------------------------------------*/
int main () {
	
	int a = 1;
	float b = 2.5;
	
	printf ("Valor de (a): %d\n", a);
	printf ("Valor de (b): %.3f\n", b);
	
	zerador_int(&a);
	zerador_float(&b);
	
	printf ("Valor de (a): %d\n", a);
	printf ("Valor de (b): %.3f\n", b);
	
	return 0;
}
