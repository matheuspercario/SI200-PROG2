/* EXERCICIO RECURSIVIDADE - Calcular a soma de 1 ate "N" */

/*OBS*/
/* Pos Incremento - Valor � passado para variavel ou fun��o e depois incrementado */
/* Pre Incremento - Valor � incrementado e depois passado para variavel ou fun��o */
#include <stdio.h>

int somar_ate (int valor, int maximo) //int valor == soma(0)  e   int maximo == N(valor fornecido pelo usu�rio)
{
	if (valor < maximo)
	{
		/* Recursividade - Fun��o chama a pr�pria funcao */
		/* Existe o "++valor" para o incremento da "soma = 0" que foi passado na main */
		return valor + somar_ate(/*OBS*/++valor, maximo); 
	}
	
	/* Quando atingir valor maximo, retornar 0 */	
	return 0; 	
}



int main (void) 
{
	int N;
	int soma = 0;
	
	printf("Informe o numero: ");
	scanf("%d", &N);
	
	soma = somar_ate (soma, N);
	
	printf ("A soma total eh: %d", soma);
	
	return 0;	
}

