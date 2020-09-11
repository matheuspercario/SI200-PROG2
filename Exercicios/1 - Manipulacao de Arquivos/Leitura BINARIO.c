/* 03/10/2018 - P1 - SI200 */
/* Matheus Percario Bruder RA: 222327 */

/*Leitura ARQUIVO BINARIO*/
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
	fptr = fopen ("C:\\Users\\theus\\Desktop\\PROG II\\testeESCRITA.bin", "rb");
	
	if (fptr == NULL)
	{
		printf ("ERROR OPENING FILE!");
		exit (1);
	}
	
	for (n = 1; n < 5; n++)
	{
		fread (&num, sizeof(STRUCT), 1, fptr);
		printf ("%d\t %d\t %d\n", num.n1, num.n2, num.n3);
	}
	
	fclose (fptr);
	
	return 0;
	
}
