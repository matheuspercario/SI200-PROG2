/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 4 - Criar um vetor e implementar funcoes para cada funcionalidade pedida */
#include <stdio.h>
#define N 100

/* -----------------------------------------------------------------------------
Prototipos das funcoes
------------------------------------------------------------------------------*/
void Inserir_vetor(int vetor[N-1]);
void Soma_vetor(int vetor[N-1]);
void Media_vetor(int vetor[N-1]);
void Substituir_vetor(int vetor[N-1]);
void Negativos_vetor(int vetor[N-1]);
void Positivos_vetor(int vetor[N-1]);


/* -----------------------------------------------------------------------------
PRINCIPAL
------------------------------------------------------------------------------*/
int main () {
	
	int vetor[N-1];
	int q;
	
	do {
		system("cls"); 
		printf("1 -> Digitar valores no vetor\n");
        printf("2 -> Imprimir a soma dos valores\n");
		printf("3 -> Imprimir a media dos valores\n");
		printf("4 -> Substituir por 0 todos valores negativos\n");
		printf("5 -> Imprimir a quantidade de numeros negativos \n");
		printf("6 -> Imprimir a quantidade de numeros positivos\n");
		printf("7 -> Sair \n:");
		scanf("%d", &q);     /* Ler a opcao do usuario */
		switch(q) {
	
			case 1: Inserir_vetor(&vetor[N-1]);
					printf ("Insercao realizada com sucesso!\n\n");
					system("pause");
					break;
					
            case 2: Soma_vetor(&vetor[N-1]);
            		break;  
					          		
            case 3: Media_vetor(&vetor[N-1]);
            		break;
            		
            case 4: Substituir_vetor(&vetor[N-1]);
           			printf ("Substituicao realizada com sucesso!\n\n");
           			system("pause");
            		break;
            		
			case 5: Negativos_vetor(&vetor[N-1]);
					break;
		
			case 6: Positivos_vetor(&vetor[N-1]);
					break;
			
			case 7: break;
			
			default: printf("\n\n Opcao nao valida\n\n");
					 system("pause");
		}
		getchar();    /* Limpa o buffer de entrada */
	} while ((q != 7) );

}

/* ------------------------------------------------------------------------------------
INSERIR elementos no vetor
--------------------------------------------------------------------------------------*/
void Inserir_vetor(int *vetor)
{
	int i;
	
	printf ("Digite os elementos do vetor:\n");
	for(i = 0; i < N; i++)
	{
		scanf ("%d", &vetor[i]);
	}
}
/* ------------------------------------------------------------------------------------
SOMA dos elementos do vetor
--------------------------------------------------------------------------------------*/
void Soma_vetor(int vetor[N-1])
{
	int i, total;
	total = 0;
	
	for(i = 0; i < N; i++)
	{
		total = total + vetor[i];
	}
	printf("%d\n\n", total);
}
/* ------------------------------------------------------------------------------------
MEDIA dos elementos do vetor
--------------------------------------------------------------------------------------*/
void Media_vetor(int vetor[N-1])
{
	float media;
	int i, total;
	total = 0;
	
	for(i = 0; i < N; i++)
	{
		total = total + vetor[i];	
	}
	
	media = total / N;
	printf ("A media dos valores eh: %.2f\n\n", media);
}
/* ------------------------------------------------------------------------------------
SUBSTITUIR negativos por 0
--------------------------------------------------------------------------------------*/
void Substituir_vetor(int *vetor)
{
	int i;
	
	for (i = 0; i < N; i++)
	{
		if(vetor[i] < 0) 
		{
			vetor[i] = 0;
		}
		
	}
}
/* ------------------------------------------------------------------------------------
IMPRIMIR a quantidade de numeros negativos
--------------------------------------------------------------------------------------*/
void Negativos_vetor(int vetor[N-1])
{
	int i;
	int contador = 0;
	
	for (i = 0; i < N; i++)
	{
		if(vetor[i] < 0) 
		{
			contador++;
		}	
	}
	printf ("Existem %d numeros negativos no vetor\n\n", contador);
}
/* ------------------------------------------------------------------------------------
IMPRIMIR a quantidade de numeros positivos
--------------------------------------------------------------------------------------*/
void Positivos_vetor(int vetor[N-1])
{
	int i;
	int contador = 0;
	
	for (i = 0; i < N; i++)
	{
		if(vetor[i] > 0) 
		{
			contador++;
		}	
	}
	printf ("Existem %d numeros positivos no vetor\n\n", contador);
}
