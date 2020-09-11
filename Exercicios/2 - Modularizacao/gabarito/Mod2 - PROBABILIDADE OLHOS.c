/*
    Exercício 2: Programa para calcular probabilidade de bebês
    nascerem com olhos azuis
     - Não há certeza do seu efetivo funcionamento.

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>
#include<stdlib.h>

// Função para fatorial
int fatorial (int n)
{
    int resultado = n;  // Recebe o valor digitado do usuário e coloca em resultado
    int i;              // Contador

    for (i = n-1; i > 0; i--)   // Loop decrementa do valor digitado do usuário
    {
        resultado *= i;         // Multiplica com o exitente em resultado
    }

    return resultado;           // Retorna o resultado
}

// Função para potência. Funciona apenas para expoentes inteiros
float potencia (float base, int exp)
{
    float resultado = base; // Recebe o valor digitado do usuário para base e coloca em resultado
    int i;                  // Contador

    for (i = exp-1; i > 0; i--) // Loop decrementa do valor do expoente digitado do usuário
    {
        resultado *= base;      // Multiplica com o exitente em resultado
    }

    return resultado;           // Retorna o resultado
}

// Função para calulcar probabilidade de se ter olhos azuis
float olhos_azuis (int n, int k)
{
    float resultado; // Armazena o resultado

    // Condição de erro na função
    if (n < k)
    {
        return -1;  // Retorna -1
    }

    // Calcula o resultado
    resultado = (fatorial(n) / (fatorial(k) * fatorial(n-k))) * potencia(0.25,k) * potencia(0.75, n-k);

    return resultado;   // Retorna o resultado
}

// Função main
int main (void)
{
    int n, k;   // Variáveis digitadas pelo usuário
    float p;    // Variável para o resultado

    printf("--- Calcular probabilidades: olhos azuis ---\n");

    // Inserção dos valor n e k
    printf("\nDigite o numero de criancas n: ");
    scanf("%d", &n);
    printf("\nDigite o numero de criancas com olhos azuis k: ");
    scanf("%d", &k);

    // Calcula a probabilidade
    p = olhos_azuis(n,k);

    // Caso receba valores errados, envia mensagem e encerra o programa
    if (p == -1)
    {
        printf("\nERRO: O numero de criancas n deve ser maior ou igual ao numero k!!");
        return 0;
    }
    // Caso receba valores válidos, exibe a probabilidade
    else
    {
        printf("\nA probabilidade e de P = %.2f", p);
    }

    return 0;
}
