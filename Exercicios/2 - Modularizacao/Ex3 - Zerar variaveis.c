/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 3 - Escreva uma fun��o C que receba como par�metro duas vari�veis inteiras e "zere" o valor dessas vari�veis. */
#include <stdio.h>


/* ----------------------------------------------------------------- 
FUN�OES 
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
FUN�AO PRINCIPAL
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
