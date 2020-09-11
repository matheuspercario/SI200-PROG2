# Lista de Exercícios - Modularização
## Exercício 1
Um número é primo se for divisível apenas por si próprio e por 1. Fazer uma função primo(int num) para verificar se um número passado como parâmetro é primo. A função deve retornar 1 se o número for primo e 0 caso contrário. Em seguida fazer uma função divisor(int a, int b) que verifica se b é divisor de a (b é divisor de a se o resto da divisão de a por b é zero). A função deve retornar 1 se b for divisor, caso contrário deve retornar zero. Usando as duas funções construídas, fazer um programa C para determinar os divisores primos de um número.
## Exercício 2
A probabilidade de que pais com certo tipo de olhos (azuis e castanhos) tenham um filho de olhos azuis é ¼. Fazer um programa C para calcular a probabilidade de que em n crianças, k tenham olhos azuis, de acordo com:

P = n! / (k!*(n-k)!) * (1/4)^k * (1 – 1/4)^(n-k), com: n > k

O programa deve conter uma função para calcular fatoriais e outra para calcular potências. OBS: Não utilizar função de biblioteca para o cálculo da potência.
## Exercício 3
Escreva uma função C que receba como parâmetro duas variáveis inteiras e "zere" o valor dessas variáveis. Fazer um programa C para testar a função.
## Exercício 4
Fazer um programa C que, a partir de um vetor de 100 inteiros, possibilite:
* a digitação dos valores no vetor;
* imprimir o valor do somatório de seus itens;
* imprimir a média dos valores fornecidos;
* substituir por zero todos os valores negativos;
* imprimir a quantidade de número negativos;
* imprimir a quantidade de número positivos.
## Exercício 5
Fazer um programa C que realiza o cadastro de contas bancárias com as seguintes informações: número da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e não pode haver mais de uma conta com o mesmo número. Criar o menu de opções a seguir:
1. Cadastrar contas
2. Visualizar todas as contas de um determinado cliente
3. Excluir a conta com o menor saldo (supondo a não existência de saldos iguais)
4. Sair

As opções 1, 2 e 3 devem ser implementadas utilizando funções. Verificar a
possibilidade de criar funções para outras funcionalidades que sejam utilizadas em mais
de um local no programa, por exemplo, função para buscar uma conta. 
