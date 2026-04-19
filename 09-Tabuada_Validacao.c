#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>

void limpa_ecra() // Função para limpar o ecrã
{
	system("cls||clear");

}
void limpaBuffer() // Função para limpar o buffer do teclado
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF); 
}
int main()
{
	int n, resultado, vezes;
	setlocale(LC_ALL, "Portuguese");
	resultado = 0;
	do // Ciclo principal do programa para vê quando acaba
	{
		limpa_ecra();
		do // Ciclo para validar a entrada da tabuada
		{
			printf("Indique a tabuada: ");
			resultado = scanf(" %d", &n); // Leitura do valor da tabuada
			if (resultado == 0 || n < 1 || n > 11) // se for inteiro maior que 0 e menor que 12
				printf("ERRO: Valor invalido!\n");
			limpaBuffer();
		} while (resultado == 0 || n < 1 || n > 11); // garante que é inteiro maior que 0 e menor que 12
		if (n != 0) // Se o valor for diferente de 0, mostra a tabuada
			for (int count = 1; count <= 11; count++)
			{
				vezes = n * count;
				printf("%d x %d = %d\n", n, count, vezes);
			}

		printf("\nPrima ENTER para continuar...");
		limpaBuffer();
	} while (n != 0);
}