/* 03/10/2018 - P1 - SI200 */
/* Matheus Percario Bruder RA: 222327 */


/* Escrita ARQUIVO BINARIO */
#include <stdio.h>
#include <stdlib.h>

	
//FUNCAO GLOBAL------------------------------------
typedef struct threeNUM
{
	int n1, n2, n3;
} STRUCT;

//FUNCAO PRINCIPAL---------------------------------
int main () {
	
	int n;
	STRUCT num;
	
	FILE *fptr;
	fptr = fopen ("testeESCRITA.bin", "wb");
	
	if (fptr == NULL) 
	{
		printf ("ERROR OPENING FILE!");
		exit (1);
	}
	
	for (n = 1; n < 5; n++) 
	{
		num.n1 = n;
		num.n2 = n * 5;
		num.n3 = (n * 5) + 1;
		
		/*Tambem é um "Fprintf", porem, aponta para BLOCOS DE MEMORIA - Structs - visto isso, tal função necessita do "sizeof"*/
		fwrite (&num, sizeof(STRUCT), 1, fptr); 
		
		/*Verificar o que esta sendo escrito no ARQUIVO BINARIO*/
		printf ("%d\t", num.n1); 
	}
	
	fclose(fptr);
	
	return 0;
}
