#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>
#define N 5

//24. Elabore uma função que dado um determinado vetor de N valores reais,
// calcule e devolva a média desses valores.

//25. Elabore um programa em C que receba do operador 10 números reais 
// e os guarda num vetor.Com auxílio da
//função implementada no exercício anterior, mostre a média dos valores introduzidos

float media(float arr[])
{
	float soma = 0;
	for (int i = 0; i < N; i++)
		soma += arr[i];
		return soma / N;
}

void main()
{
	float n[N];
	setlocale(LC_ALL, "");
	for (int i = 0; i < N; i++)
	{
		printf("%dº Informe o número: ", i + 1);
		scanf(" %f", &n[i]);
	} 
	for (int i = 0; i < N; i++)
		printf(" %.2f", n[i]);
		
	printf("Média = %.2f", media(n));
}
	 