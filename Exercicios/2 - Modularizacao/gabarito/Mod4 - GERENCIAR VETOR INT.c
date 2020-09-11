/*
    Exercício 4: Programa para gerenciar um vetor de inteiros

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 100 // Tamanho do vetor

// PROTÓTIPOS DE FUNÇÕES
void inicializar(int vetor[TAM], int *valorados);   // Inicializa o vetor com 0
int inserir(int vetor[TAM], int *valorados);        // Insere valores no vetor
int soma (int vetor[TAM], int valorados);           // Faz a soma dos valores no vetor
float media (int vetor[TAM], int valorados);        // Calcula a média de valores diferentes de 0
int substituir (int vetor[TAM], int *valorados);    // Substitui os valores negtivos por 0
void p_negativos (int vetor[TAM]);                  // Imprime valores negativos do vetor
void p_positivos (int vetor[TAM]);                  // Imprime valores positivos do vetor

// FUNÇÃO MAIN
int main(void)
{
    // Declaração de Variáveis
    int vetor[TAM]; // Vetor de 100 posições
    int valorados;  // Indica quantas posições têm valores diferentes de 0
    int op;         // Opção do menu
    int verifica;   // Verifica condições da função

    inicializar(vetor, &valorados); // Zera o vetor

    // Menu principal
    do
    {
        printf("\n\n---- MANIPULACAO DE VETORES ----");
        printf("\nOpcoes");
        printf("\n\n1. Digitar valores no vetor");
        printf("\n2. Somatorio dos valores do vetor");
        printf("\n3. Media dos valores do vetor");
        printf("\n4. Substituir valores negativos por zero");
        printf("\n5. Imprimir valores negativos");
        printf("\n6. Imprimir valores positivos");
        printf("\n0. Sair");

        printf("\n Digite a opcao desejada: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1: // Insere valores no vetor
            verifica = inserir(vetor, &valorados); // Chama a função
            // Verifica condições
            if (verifica == 0) // Sucesso
                printf("Valor adicionado com sucesso!");
            else // Falha
                printf("Nao ha espaco para adicionar valores no vetor!");
            break;

        case 2: // Faz a soma dos valores no vetor
            printf("A soma dos valores do vetor e: %d\n", soma(vetor, valorados));
            break;

        case 3: // Calcula a média de valores diferentes de 0
            printf("A media dos valores do vetor e: %.1f\n", media(vetor, valorados));
            break;

        case 4: // Substitui os valores negtivos por 0
            verifica = substituir(vetor, &valorados);
            if (verifica == 0) // Sucesso
                printf("Todos os valores negativos foram zerados com sucesso!");
            else // Falha
                printf("Nao ha valores negativos no vetor!");
            break;

        case 5: // Imprime valores negativos do vetor
            p_negativos(vetor);
            break;

        case 6: // Imprime valores positivos do vetor
            p_positivos(vetor);
            break;

        case 0: // Condição de saída do loop
            break;

        default: // Opção digitada inválida
            printf("Opcao invalidada! Digite novamente!!!");
        }
    } while (op != 0); // Condição de saída do loop

    return 0;
}

// IMPLEMENTAÇÃO DAS FUNÇÕES

// Inicializa o vetor com 0
void inicializar(int vetor[TAM], int *valorados)
{
    int i; // Contador

    for (i = 0; i < TAM; i++)
        vetor[i] = 0;   // 0 é o padrão para espaço não atribuído

    *valorados = 0;     // Nenhuma conta cadastrada -> 0
}

// Insere valores no vetor
int inserir(int vetor[TAM], int *valorados)
{
    int i;   // Contador
    int add; // Recebe o valor a ser adicionado

    // Coleta o valor digitado
    printf("\nDigite o valor a ser inserido: ");
    scanf("%d", &add);

    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] == 0)  // Se encontrar uma opção "vazia" (igual a 0)
        {
            vetor[i] = add; // Adiciona na posição
            ++*valorados;   // Adiciona ao contador de valores alocados
            return 0;       // Sai da função
        }
    }
    // Retorna 1 caso não enconte onde adicionar um valor
    return 1;
}

// Faz a soma dos valores no vetor
int soma (int vetor[TAM], int valorados)
{
    int i;              // Contador
    int resultado = 0;  // Variável para retornar resultado

    for (i = 0; i < TAM; i++)
        resultado += vetor[i]; // Soma toda posição

    return resultado; // Retorna a soma
}

// Calcula a média de valores diferentes de 0
float media (int vetor[TAM], int valorados)
{
    int resultado = 0; // Variável para retornar resultado

    resultado = soma(vetor, valorados); // Chama a função soma e guarda o resultado

    // Retorna a média
    return (float)resultado / (float)valorados; // os valores int devem ser convertido para float
}

// Substitui os valores negtivos por 0
int substituir (int vetor[TAM], int *valorados)
{
    int i;                  // Contador
    int ck = *valorados;    // Verificador

    for (i = 0; i < TAM; i++)   // Percorre o vetor
    {
        if (vetor[i] < 0)       // Caso um valor seja negativo
        {
            vetor[i] = 0;       // Zera o valor
            --*valorados;       // Diminui na contagem de valorados
        }
    }
    if (ck != *valorados)
        return 0;           // Retorna 0 se houve substituição
    else
        return 1;           // Retorna 1 se não houve
}

// Imprime valores negativos do vetor
void p_negativos (int vetor[TAM])
{
    int i;      // Contador
    int ck = 0; // Verificador

    printf("\nOs valores negativos do vetor sao: \n");
    for (i = 0; i < TAM; i++)           // Percorre o vetor
    {
        if (vetor[i] < 0)               // Caso seja negativo
        {
            printf("%d ", vetor[i]);    // Imprime
            ck++;                       // Conta um valor
        }
    }
    if (ck == 0)    // Mensagem caso não haja números negativos
        printf("Nao ha valores negativos!\n");
}

// Imprime valores positivos do vetor
void p_positivos (int vetor[TAM])
{
    int i;      // Contador
    int ck = 0; // Verificador

    printf("\nOs valores positivos do vetor sao: \n");
    for (i = 0; i < TAM; i++)           // Percorre o vetor
    {
        if (vetor[i] > 0)               // Caso seja positivo
        {
            printf("%d ", vetor[i]);    // Imprime
            ck++;                       // Conta um valor
        }
    }
    if (ck == 0)    // Mensagem caso não haja números negativos
         printf("Nao ha valores positivos!\n");
}
