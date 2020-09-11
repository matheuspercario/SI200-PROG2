/* EXERCICIO RECURSIVIDADE - Imprime Fibonacci com 10 termos */
#include <stdio.h>

int fibonacci (int num)
{
	if ((num == 1) || (num == 2))
	{
		return 1;
	}
	
	return fibonacci(num-1) + fibonacci(num-2);
}


int main (void)
{
	int termo;
	int i;

	
	printf("Digite a quantidade de termos da sequencia Fibonacci: ");
	scanf("%d", &termo);
	
	for (i = 0; i < termo; i++)
	{
		printf("%d\n", fibonacci(i+1));
	}
	
	return 0;
}
