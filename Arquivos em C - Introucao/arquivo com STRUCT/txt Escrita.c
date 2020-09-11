#include <stdio.h>
#include <stdlib.h>

struct threeNum {
	int n1, n2, n3;
};

int main (){
	int n;
	struct threeNum num;
	
	FILE *arquivo;
	if((arquivo = fopen ("texto.txt", "wt"))==NULL){
		printf("ERROR! opening file");
		exit(1);
	}
	for (n=1; n<5; ++n){
		num.n1 = n;
		num.n2 = 5*n;
		num.n3 = 5*n+1;
		fwrite (&num, sizeof(struct threeNum),1, arquivo);

		//Numeros ha serem guardados no arquivo ---------------- /  
		//**obs: NAO ESTOU LENDO O AQUIVO!!  estou mostrado o que tem que estar lá... */
		printf("\nVALORES GUARDADOS NO AQUIVO:\n");
		printf("Valor de num.n1=	%d\n", num.n1);
		printf("Valor de num.n2=	%d\n", num.n2);
		printf("Valor de num.n3=	%d\n", num.n3);

	}


	printf("\n\nEscrita em arquivo binario\n");
	fclose (arquivo);
	
return 0;
}


