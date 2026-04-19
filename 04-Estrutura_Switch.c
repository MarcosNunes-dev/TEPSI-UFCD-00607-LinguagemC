#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese"); // Definir a localidade para Português
	int mes;
	printf("Digite o número do mês (1-12): ");  // mostra ao utilizador
	scanf("%d", &mes); //obtem o valor do utilizador e guarda na variavel 

	switch (mes)//o que é switch case em C ? tipo de estrutura condicional 
		//igual ao if else porem mais simples de usar quando se tem muitas condições
	{
	case 1:
		printf("Janeiro\n");
		break;
	case 2:
		printf("Fevereiro\n");
		break;
	case 3:
		printf("Março\n");
		break;
	case 4:
		printf("Abril\n");
		break;
	case 5:
		printf("Maio\n");
		break;
	case 6:
		printf("Junho\n");
		break;
	case 7:
		printf("Julho\n");
		break;
	case 8:
		printf("Agosto\n");
		break;
	case 9:
		printf("Setembro\n");
		break;
	case 10:
		printf("Outubro\n");
		break;
	case 11:
		printf("Novembro\n");
		break;
	case 12:
		printf("Dezembro\n");
		break;
	default:
		printf("Número inválido!\n");
		break;
	}
}
