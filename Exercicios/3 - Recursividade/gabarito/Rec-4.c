/*
    Exercício 4: Programa para ler valores de um vetor
    O vetor foi definido estaticamente para facilitar a programação.
    Aplicações mais versáteis poderiam usar a mesma lógica.

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>
#define TAM 10

int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};

// Função recursiva para imprimir os valores de um vetor
void print_vetor (int n)
{
    if (n < TAM) // Se ainda for verdadeira
    {
        printf("%d ", vetor[n]);    // Imprime a posição do vetor
        print_vetor(++n);           // Chama a função com incremento
    }
}
// Função main
int main (void)
{
    int n = 0;      // Começa com o número 0
    print_vetor(n); // Chama a função recursiva

    return 0;
}
