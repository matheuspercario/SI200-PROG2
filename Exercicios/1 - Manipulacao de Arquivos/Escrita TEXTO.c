/* 03/10/2018 - P1 - SI200 */
/* Matheus Percario Bruder RA: 222327 */

/*ESCRITA EM ARQUIVO TEXTO*/
#include <stdio.h>
#include <stdlib.h>

int main (/*int argc, char argv []*/) { //Parametros desnecessarios!!!

	int num, num2;
	FILE *fptr; //Ponteiro para posicao de memoria do arquivo
	fptr = fopen ("C:\\Users\\theus\\Desktop\\PROG II\\testeESCRITA.txt","w"); //atribuir o arquivo ao ponteiro
	
	if (fptr == NULL) //Verificar a atribuicao feita ao ponteiro esta correta (memoria)
	{
		printf ("ERROR OPENING FILe!");
		return 1; 
	}
	
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	
	fprintf (fptr, "%d", num);
	
	fclose (fptr);
	
	return 0;
}
	
	
	
