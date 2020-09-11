/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 1 - Criar as seguintes funcoes: primo(int num); divisor(int a, int b) */
#include <stdio.h>
#include <stdlib.h>

/* ----------------------------------------------------------------- 
PROTOTIPOS DAS FUNÇOES 
-------------------------------------------------------------------*/
int primo (int num);
int divisor (int a, int b);

/* ----------------------------------------------------------------- 
FUNÇAO PRINCIPAL
-------------------------------------------------------------------*/
int main() {
	
	int num, X, aux_primo, aux_div;
	int contador = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &X);
	
	/*O numero "1" é primo por definicao*/
	printf ("|1|"); 
	
	for(num = 1; num <= X; num++) 
	{
		aux_primo = primo (num);
		if (aux_primo == 1)
		{
			aux_div = divisor(X, num);	
			if (aux_div == 1)
			{
				printf ("%d|", num);
			}
		}
	}
	
	return 0;
}


/* ----------------------------------------------------------------- 
FUNÇOES 
-------------------------------------------------------------------*/
int primo (int num)
{
	int i;
	int total_primo = 0;
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0) {
			total_primo++;
		}
	}
	
	if (total_primo == 2){
		return 1;
	}
	else {
		return 0;
	}
}

//===================================================================
int divisor(int a, int b)
{
	if (a % b == 0){
		return 1;
	}
	
	else {
		return 0;
	}
	
}
