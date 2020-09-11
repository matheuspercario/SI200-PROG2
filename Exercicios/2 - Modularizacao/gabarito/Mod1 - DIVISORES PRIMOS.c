/*
    Exercício 1: Programa para calcular divisores primos

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>
#include<stdlib.h>

// Função para calcular divisor
int divisor(int a, int b){
 if(b%a == 0)
    return 1; // Divisor
else
    return 0; // Não divisor
}

// Função para obter números primos
int primo (int num){
    int i;

    if (num == 2) // Exceção para 2
    {
        return 1;
    }

    // Se ocorreu uma única divisão até antes do número, não é primo
    for (i=2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    // É primo se passar por todo o for
    return 1;
}

void divisor_primo(int num){
int i;
    printf("\nSao divisores primos deste numero:\n");
	for (i=2; i<num;i++){
		if((primo(i)== 1) && (divisor(i,num) == 1)){
			printf("%d\n",i);
        }
    }
	if(primo(num) == 1){
		printf("%d\n",num);
	}
}
int main(){

    int num;

    // Coleta o valor desejado
    printf("Digite um numero qualquer: ");
    scanf("%d",&num);

    // Verifica se é primo
    if (primo(num) == 1)
    {
        printf("\nO numero %d e primo\n", num);
    }
    else
    {
        printf("\nO numero %d nao e primo\n", num);
    }

    // Mostras os divisores primos do numero
    divisor_primo(num);

    return 0;
}
