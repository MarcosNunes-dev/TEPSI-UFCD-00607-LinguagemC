#ifdef _MSC_VER 
#define _CRT_SECURE_NO_WARNINGS 
#endif
#include <stdio.h>
#include <locale.h>	 
void main()
{
	int varI;
	float varF;
	char varC;
	double varD;
	printf("Insira um valor inteiro		: ");
	scanf("%d", &varI); // para receber dados o scanf não modifica a variavel 
						//tem que colocar o & na frente da variavel para pode altera-lá.
	printf("Insira um valor real		: ");
	scanf("%f", &varF);
	printf("Insira um valor double		: ");
	scanf("%lf", &varD);
	printf("Insira um caracter			: ");
	scanf(" %c", &varC);
	puts(______________________________________);

	int n1, n2;
	printf("Insira um valor inteiro		: ");
	scanf("%d", &n1);
	printf("Insira um valor inteiro		: ");
	scanf("%d", &n2)

}