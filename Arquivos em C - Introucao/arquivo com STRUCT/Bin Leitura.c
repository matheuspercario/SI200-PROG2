#include <stdio.h>
#include <stdlib.h>

struct threeNum {
	int n1, n2, n3;
};

int main (){
	int n;
	struct threeNum num;
	FILE *arquivo;

	if((arquivo = fopen ("texto.bin", "rb"))==NULL){
		printf("ERROR! opening file");
		exit(1);
	}
	for (n=1; n<5; ++n){ 
		fread(&num, sizeof(struct threeNum), 1, arquivo);		// Leio o "bloco" num do arquivo na na linha 1, e guardo na STRUCT num no programa.
		fscanf(arquivo, "%d %d %d", num.n1, num.n2, num.n3); 	// NAO eh necessario "FSCANF" pois já foi exerutato o "FREAD"
		printf ("%d %d %d\n", num.n1, num.n2, num.n3);
	}
	
	printf("\nLeitura de um arquivo binario\n");
	fclose(arquivo);

return 0;
}

/*	ANOTACAO	*/

//	FSCANF = mais usado para ler dados de um arquivo	//
//	FREAD = mais usado para ler dados emuma ESTRUTURA de um arquivo	//
