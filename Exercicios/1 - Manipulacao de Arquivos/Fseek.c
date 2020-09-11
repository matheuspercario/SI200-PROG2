/* 03/10/2018 - P1 - SI200 */
/* Matheus Percario Bruder RA: 222327 */

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

	//	LEMBRE-SE:
	//	fseek (      FILE *fp,          long numbytes,             int origem    );
	//	fseek (ponteiro do arquivo, tamnho que eu quero pular,  a partir de onde );	
		
//	fseek(arquivo, 2*sizeof(struct threeNum), SEEK_SET); 
/*	Execute estes ha baixo... */
//	fseek(arquivo, -1*sizeof(struct threeNum), SEEK_END); 
// 	fseek(arquivo, 4*sizeof(struct threeNum), SEEK_SET); 
	
	for(n=1; n<5; ++n){
	    
		fread(&num, sizeof(struct threeNum), 1, arquivo); 
		//printf("Linhas:\n", n);
		printf(" n1= %d \n\n", num.n1);
	}
	printf ("Busca em arquivos usando fseek");
	fclose (arquivo);
return 0;
}
