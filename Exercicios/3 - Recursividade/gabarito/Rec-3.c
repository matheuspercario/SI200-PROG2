/*
    Exercício 3: programa para ler os 10 primeiros números
    da sequência de fibonacci

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>

// Função recursiva para mostrar os números da sequência de fibonacci
void fibonacci (int a, int b)
{
    if ((a + b) <= 89)      // 89 é o décimo número da sequência (caso esta comece com 1)
    {
        printf("%d ", a+b); // Imprime o número
        fibonacci(b, a+b);  // Chama a função novamente
    }
}
// Função main
int main(void)
{
    int a = 0, b = 1;   // Insere os dois primeiros números da sequência

    fibonacci(a,b);     // Chama a função

    return 0;
}
