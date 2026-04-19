#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h> // para fazer o sorteio
#include <time.h>
void mostraValores(int x, int y);
void trocaValores(int *x, int *y);


int main()
{
	int a, b;
	setlocale(LC_ALL, "");
	printf("Recebe A: ");
	scanf("%d", &a);
	printf("Recebe B: ");
	scanf("%d", &b);
	mostraValores(a, b);
	trocaValores(&a, &b);
	puts("Estou no main");
	mostraValores(a, b);
	return 0;
}

void mostraValores(int x, int y)
{
	printf("1º Valor: %d\n", x);
	printf("1º Valor: %d\n", y);

}
void trocaValores(int *x, int *y)
{
	int temporaria;
	temporaria = *x;
	*x = *y;
	*y = temporaria;

	puts("Dentro da Função Troca Valores()");
	mostraValores(*x, *y);

}