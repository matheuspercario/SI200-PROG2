/* PROG II - LISTA DE MODULARIZACAO */
/* Exercicio 2 - Calculo de probabilidade */
/* P = n! / (k!*(n-k)!) * (1/4)k * (1 – 1/4)n-k     //      n > k */
#include <stdio.h>

/* ----------------------------------------------------------------- 
PROTOTIPOS DAS FUNÇOES 
-------------------------------------------------------------------*/
double fatorial (int x);
double potencia (float base, int exp);

/* ----------------------------------------------------------------- 
FUNÇAO PRINCIPAL
-------------------------------------------------------------------*/
int main () {
	
	int n, k;
	float p;
	
	printf ("Digite o (n): ");
	scanf ("%d", &n);
	printf ("Digite o (k): ");
	scanf ("%d", &k);
	
	if (n > k) 
	{
		p = fatorial(n) / (fatorial(k) * fatorial(n-k)) * potencia(0.25, k) * potencia(0.75, (n-k));
		printf ("\nA probabilidade eh: %f", p);
	}
	else {
		printf ("Valores invalidos!");
		system ("pause");
		exit (1);
	}
	
	return 0;
}

/* ----------------------------------------------------------------- 
FUNÇOES 
-------------------------------------------------------------------*/
double fatorial (int x) 
{
	double fat = 1.0;
	
	while (x > 1) {
		fat = fat*x;
		x--;
	}

	return fat;
}

//==================================================================
double potencia (float base, int exp)
{
	int i;
	double res = 1.0;
	
	for (i = 1; i <= exp; i++) 
	{
		res = res*base;
	}
	
	return res;
}

