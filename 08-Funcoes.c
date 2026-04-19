#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

int somaDois(int v1, int v2)
{
	int soma = v1 + v2;
	return soma;
}
int somaDois_v2(int v1, int v2)
{
	return v1 + v2;
}
void main()
{
	int a = 10, b = 20;
	setlocale(LC_ALL, "Portuguese");
	printf("%d + %d = %d\n", a, b, somaDois(a,b));
}