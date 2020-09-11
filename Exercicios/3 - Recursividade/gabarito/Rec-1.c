/*
    Pograma para somar um número de 1 até n, com n
    digitado pelo usuário

    FEITO POR: Rodrigo de Lima Martins
*/

#include <stdio.h>
#include <stdlib.h>

// Função recursiva para somar números de 1 até N (digitado pelo usuário)
int somaN(int n)
{
    int r;                  // Armazena o resultado
    if (n == 0)             // Se for 0, retorna 0
        return 0;
    else
    {
        r = n + somaN(n-1); // Igualmente como fatorial, mas como soma
        return r;           // Retorna o valor do resultado
    }
}
// Função main
int main (void)
{
    int numero; // Para inserção do número

    // Digita um número qualquer
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Chama a soma de 1 até o N
    printf("A soma de 1 ate %d e: %d", numero, somaN(numero));

    return 0;
}
