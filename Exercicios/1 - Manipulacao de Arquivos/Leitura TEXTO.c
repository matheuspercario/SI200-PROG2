/* 03/10/2018 - P1 - SI200 */
/* Matheus Percario Bruder RA: 222327 */

/*LEITURA EM ARQUIVO TEXTO*/
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num;
	FILE *fptr;
	fptr = fopen ("C:\\Users\\theus\\Desktop\\PROG II\\testeESCRITA.txt","r+");
	
	if (fptr == NULL)
	{
		printf ("ERROR OPENING FILE!");
		exit(1);
	}
	
	fscanf (fptr, "%d", &num); //fptr = indicar arquivo; "%d" = scanear numero; &num = gravar numero escaneado nessa variavel
	
	printf ("value of \"n\" eh: %d", num); //printar na tela do programa o valor escaneado em "fscanf"
	
	fclose(fptr); //fechar o ARQUIVO (fechar gaveta)
	
	return 0;
}
