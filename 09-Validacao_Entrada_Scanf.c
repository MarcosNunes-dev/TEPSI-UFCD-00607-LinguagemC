#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES // Necess�rio para M_PI
#include <math.h>
#define PI 3.14f		// constante PI definida aqui  o f depois do 3.14 obriga a ser float
void limpaBuffer()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF); // fflush() limpar o buffer
}
int main()
{
	int resultado;
	int val_i;
	float val_f;
	setlocale(LC_ALL, "");
	resultado = 0;
	do
	{
		printf("Insira um valor inteiro: ");
		resultado = scanf(" %d", &val_i);
		if (resultado == 0)
			printf("ERRO: ao receber o inteiro\n");
		limpaBuffer();
	} while (resultado == 0);

	resultado = 0;
	do
	{
		printf("Insira um valor decimal: ");
		resultado = scanf(" %f", &val_f);
		if (resultado == 0)
			printf("ERRO: ao receber o valor decimal\n");
		limpaBuffer();
	} while (resultado == 0);

}