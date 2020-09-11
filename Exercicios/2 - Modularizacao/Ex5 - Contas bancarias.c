/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 5 - Criar um programa que realize o cadastro de contas bancarias */
#include <stdio.h>
#include <string.h>

#define NOME 50
#define LIM 15

/* -----------------------------------------------------------------------------
Estrutura de Armazenamento
------------------------------------------------------------------------------*/
char pesquisa[NOME];
int contador, i, num; 


typedef struct banco {
	
	int numero_conta;
	float saldo_cliente;
	char nome_cliente[NOME];
	
} BANCO;


/* -----------------------------------------------------------------------------
Prototipos das funcoes
------------------------------------------------------------------------------*/
void cadastro 	();
void visualizar ();
void excluir	();
void ordenar	();

/* -----------------------------------------------------------------------------
PRINCIPAL
------------------------------------------------------------------------------*/
int main () {
	
	BANCO pessoa[LIM];
	BANCO vazio = {-1, -1.0, "vazio"};
	BANCO ordenar;
	
	pessoa[0] = vazio;
	contador = 0;
	num = 1;
	
	int q;
	
	do {
		system("cls"); 
		printf("1 -> Cadastrar conta\n");
        printf("2 -> Visualizar informacoes do cliente\n");
		printf("3 -> Excluir conta com menor saldo\n");
		printf("4 -> Sair\n:");
		scanf("%d", &q);     /* Ler a opcao do usuario */
		switch(q) {
	
			case 1:	cadastro ();
					printf("\nCadastro realizado com sucesso!\n\n");
					system("pause");
					break;
					
            case 2: printf ("Digite o nome do cliente: ");
					fgets (pesquisa, NOME, stdin);
					//fflush(stdin);
					visualizar ();
					break;
					          		
            case 3: excluir ();
            		break;
                   		
            case 4: break;
			
			default: printf("\nOpcao nao valida!\n\n");
					 system("pause");
		}
		getchar();    /* Limpa o buffer de entrada */
	} while ((q != 4) );

}


/* ------------------------------------------------------------------------------------
Cadastrar contas
--------------------------------------------------------------------------------------*/
void cadastro ()
{
	BANCO pessoa[LIM];
	BANCO vazio = {-1, -1.0, "vazio"};
	
	for (i = contador; num < LIM; i++) 
	{
			printf("Digite o numero de conta para cadastro: ");
			scanf("%d", &pessoa[i].numero_conta);
			//fflush(stdin);
			
			printf("Digite o saldo do cliente para cadastro: ");
			scanf("%f", &pessoa[i].saldo_cliente);
			//fflush(stdin);
			
			printf("Digite o nome do cliente para cadastro: ");
			fgets(pessoa[i].nome_cliente, NOME, stdin);
			//fflush(stdin);
			
			pessoa[i + 1] = vazio;
			contador = contador + 1;
			break;
	}				
}

/* ------------------------------------------------------------------------------------
Visualizar todas contas de um cliente
--------------------------------------------------------------------------------------*/
void visualizar ()
{
	BANCO pessoa[LIM];
	BANCO vazio = {-1, -1.0, "vazio"};

		for (i = 0; i < contador; i++) 
		{ 
			if ((strcmp (pesquisa, pessoa[i].nome_cliente)) == 0) 
			{ 
				printf ("\n%s \n%d \n%.2f \n%", pessoa[i].nome_cliente, pessoa[i].numero_conta, pessoa[i].saldo_cliente);	
				break;
			}
		}
}
	
/* ------------------------------------------------------------------------------------
Excluir conta com o menor saldo
--------------------------------------------------------------------------------------*/
void excluir ()
{
	BANCO pessoa[LIM];
	BANCO vazio = {-1, -1.0, "vazio"};
	ordenar ();
	
		pessoa[0] = vazio;
		contador = contador - 1;
}


/* ------------------------------------------------------------------------------------
FUNCAO DE APOIO
--------------------------------------------------------------------------------------*/
void ordenar ()
{
	BANCO pessoa[LIM];
	BANCO ordenar;
	
	for (i = 0; i < contador; i++) 
	{
		if (i == (contador - 1)) 
		{
			break;
		}

			if (pessoa[i].saldo_cliente > pessoa[i + 1].saldo_cliente)
			{
				ordenar = pessoa[i];
				pessoa[i] = pessoa[i + 1];
				pessoa[i + 1] = ordenar;
			}
	}		
}

