/*
    Exercício 5: programa para gerenciar uma lista de contas
    bancárias

    FEITO POR: Rodrigo de Lima Martins
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 15 // Tamanho do vetor

int n_conta = 1; // Contador global de contas
/*
    A ideia de um contador global vem da possibilidade de recuperar contas apagadas
    anteriormente. Nenhuma função para tal foi implmentada no código
*/

// Estrutura para contas
typedef struct Contas
{
    int numero;
    char nome[80];
    float saldo;
} Contas;

// PROTÓTIPOS DAS FUNÇÕES
void inicializar(Contas contas[TAM], int *valorados);   // Inicializa a estrutura de contas
int cadastrar(Contas contas[TAM], int *valorados);      // Cadastra novas contas
void visualizar(Contas contas[TAM]);                    // Visualiza conta de acordo com o nome digitado
int excluir(Contas contas[TAM], int *valorados);        // Exclui a conta de menor saldo

// FUNÇÃO MAIN
int main (void)
{
    // Declaração de variáveis
    Contas contas[TAM];     // Estrutura das contas
    int valorados;          // Conta quantas contas estão cadastradas
    int op;                 // Seletor de opções
    int verifica;           // Verifica status das funções

    // Inicializa a estrutura
    inicializar(contas, &valorados);

    // Menu principal
    do
    {
        printf("\n\n---- GERENCIADOR DE CONTAS ----");
        printf("\nOpcoes");
        printf("\n\n1. Cadastrar contas");
        printf("\n2. Visualizar contas de um cliente");
        printf("\n3. Excluir a conta de menor saldo");
        printf("\n4. Sair");

        printf("\n Digite a opcao desejada: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1: // Cadastra contas
            verifica = cadastrar(contas, &valorados);
            if (verifica == 0)  // Caso tenha dado certo
                printf("\nOperacao realizada com sucesso!\n");
            else                // Caso tenha atingido o limite ou já se está nele
                printf("\nLimite de contas ja atingido!\n");
            break;

        case 2: // Visualizar conta de um cliente
            visualizar(contas);
            break;

        case 3: // Exclui a conta de menor saldo
            verifica = excluir(contas, &valorados);
            if (verifica == 0)  // Caso exista uma conta para ser excluída
                printf("\nOperacao realizada com sucesso!\n");
            else                // Caso não haja contas a serem excluídas
                printf("\nNao ha contas registradas!\n");
            break;

        case 4: // Condição de saída
            break;

        default: // Opção digitada inválida
            printf("Opcao invalidada! Digite novamente!!!");
        }
    } while (op != 4); // Condição de saída do loop

    return 0;
}

// Inicializa a estrutura de contas
void inicializar(Contas contas[TAM], int *valorados)
{
    int i;  // Contador

    for (i = 0; i < TAM; i++)
    {
        contas[i].numero = -1; // -1 é o padrão para espaço não atribuído
    }

    *valorados = 0; // Nenhuma conta cadastrada -> 0
}

// Cadastra novas contas
int cadastrar(Contas contas[TAM], int *valorados)
{
    int i;      // Contador
    char op;    // Opção de menu

    // Caso a lista esteja já cheia
    if (*valorados == TAM)
    {
        return 1; // Cadastro completo
    }

    // Percorre vetor para encontrar espaços para cadastro
    for (i = 0; i < TAM; i++)
    {
        if (contas[i].numero == -1)  // Se encontrar uma opção "vazia" (igual a -1)
        {
            // Cadastro do numero das contas usa um contador global
            contas[i].numero = n_conta;
            n_conta++; // Novas contas nunca usarão números das antigas

            // Inserir o nome do cliente
            printf("\nDigite o nome do cliente: ");
            getchar(); // Lixo
            fgets(contas[i].nome, 80, stdin);

            // Inserir o saldo da conta
            printf("\nDigite o saldo da conta: ");
            scanf("%f", &contas[i].saldo);

            ++*valorados;   // Adiciona ao contador de valores alocados

            getchar(); // Lixo

            printf("\nConta adicionada com sucesso!!");             // Mensagem de confirmação
            printf("\nVoce deseja inserir mais uma conta? [s/n] "); // Condição de saída
            scanf(" %c", &op);                                      // Armazena resposta

            if (op == 'n' || op == 'N') // Sai da função
                return 0;
        }
    }
    // Retorna 1 caso não encontre onde adicionar um valor ou quando não tiver mais como adicionar contas
    return 1;
}

// Visualiza conta de acordo com o nome digitado
void visualizar(Contas contas[TAM])
{
    int i;          // Contador
    int ck = 0;     // Verificador
    char busca[80]; // Vetor para busca

    // Inserção do nome para busca
    printf("\nDigite o nome do cliente desejado: ");
    getchar();
    fgets(busca, 80, stdin);

    // Percorre o vetor
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(contas[i].nome, busca) == 0)     // Verifica se os nomes são iguais
            if (contas[i].numero != -1)             // Verifica se a conta é válida
            {
                // Imprime os dados da conta
                printf("Conta encontrada:\n");
                printf(" Conta no: %d\tNome: %s     Saldo: %.2f\n", contas[i].numero, contas[i].nome, contas[i].saldo);
                ck++;                       // Conta um valor
            }
    }
    if (ck == 0)    // Mensagem caso não se encontre contas
        printf("\nNenhuma conta encontrada!\n");
}

// Exclui a conta de menor saldo
int excluir(Contas contas[TAM], int *valorados)
{
    int i, j;        // Contador
    int pos = -1;    // Armazena posição, tomando -1 como valor para nenhuma posição

    for (i = 0; i < TAM; i++)           // Percorre o vetor, procurando uma conta válida
    {
        if (contas[i].numero != -1)     // Verifica se a conta é válida
        {
            pos = i;                    // Guarda a posição
            break;                      // Sai do loop
        }
    }

    for (j = i; j < TAM; j++)                           // Percorre o vetor, começando por i
    {
        if (contas[j].numero != -1)                     // Verifica se a conta é válida
            if (contas[j].saldo < contas[pos].saldo)    // Verifica saldo em relação a posição guardada
                pos = j;                                // Armazena nova posição se verdadeiro
    }
    if (pos == -1)                  // Caso não tenha achado nenhuma conta
        return 1;                   // Retorna 1
    else                            // Caso tenha achado alguma conta
    {
        contas[pos].numero = -1;    // Invalida a posição
        --*valorados;               // Desconta das posições valoradas
        return 0;                   // Retorna 1
    }
}
