#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

void main()
{
	float qr, b, a, c;
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	printf("Escolha o Polígono indicando o nº correspondente: \n");
	printf(" 1 - Quadrado ou Retângulo. \n");
	printf(" 2 - Triangulo. \n ");
	printf(" 3 - Círculo. \n ");
	printf(" 0 - Fim do Programa \n");
	scanf("%d", &opcao);

	switch(opcao)
	{
		case 0:
			printf("Programa terminado.");
			break;
		case 1:
		
			printf("Indique a medida do lado em CM: ");
			scanf("%f", &qr);
			printf("A área do quadrado ou retângulo é: %.2f ", qr * qr);
			break;
		case 2:
			printf("Indique a medida da base em CM: ");
			scanf("%f", &b);
			printf("Indique a medida da altura em CM: ");
			scanf("%f", &a);
			printf("A área do triângulo é: %.2f ", (a * b) / 2);
			break;
		case 3:

			printf("Indique o valor do raio em CM: ");
			scanf("%f", &c);
			printf("A área do círculo é: %.2f ", 3.14 * c * c);
			break;
		default:
			printf("Opção inválida.");
			break;
	}

}