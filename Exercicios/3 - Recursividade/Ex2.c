/* EXERCICIO RECURSIVIDADE - Imprimir os primeiros 50 numeros naturais */
#include <stdio.h>

int imprimir_naturais (int Y)
{
	if (Y <= 50)
	{
		printf ("%d\n", Y);
		
		/* Recursividade - Função chama a própria funcao */
		/* Existe o "Pre Incremento", para aumentar o valor de Y a cada printf */
		return imprimir_naturais(++Y);
	}
	
	return 0;
	
}



int main (void)
{
	int X = 0;
	imprimir_naturais(X);
	
	return 0;
}
