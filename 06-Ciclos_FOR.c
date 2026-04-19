#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int n =10;

	for (int v = 10; v < 20; v++)
		printf("Número: %'d", v);
	puts ("");
	for (int v = 1000; v < 1020; v++)
	puts("");
	// erro não compila pois a variavel tem o mesmo nome
//	for (int n = 100; n < 120; n++)
	//	printf("Número: %'d", n);
}