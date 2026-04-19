#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese"); 
	int nota;
	printf("Digite a nota da avaliação: ");  
	scanf("%d", &nota); 

	if (nota >= 18 && nota <= 20)
		printf("Muito Bom");
	else if (nota >= 14 && nota <= 17)
		printf("Bom");
	else if (nota >= 10 && nota <= 13)
		printf("Suficiente");
	else if (nota >= 7 && nota <= 9)
		printf("Insuficiente");
	else if (nota >= 0 && nota <= 6)
		printf("Muito Insuficiente");
	else
		printf("Nota inválida!");
}