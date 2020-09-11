/* EXERCICIO RECURSIVIDADE - Imprime os elementos de um vetor */
#include <stdio.h>
#define N 5

/* Variavel global iniciada fora do vetor */
int a = -1;


void imprimir(int *v)
{
	/* Variavel "a" tem a função de mudar o elemento do vetor a cada chamada */
	a++;

	if (a < N)
	{
		printf ("Elemento = %d\n", v[a]);
		/* Recursividade - Imprimir chama o proprio imprimir */
		imprimir(v);
	}
	
	getch();
}



int main (void)
{
	int i;
	int VETOR[N];
	
	printf("Digite os elementos do vetor:\n");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &VETOR[i]);
	}
	
	printf("\n\n");
	imprimir(VETOR);

	return 0;
}
