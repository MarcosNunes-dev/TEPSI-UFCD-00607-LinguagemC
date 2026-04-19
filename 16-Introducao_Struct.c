#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct Viatura // criação da estrutruta, nome da estrututa tem que ser com a primeira letra maiúsucula
{
	char matricula[9];
	char cor[10];
	float motor;
	
};

// ================================================= função
void mostraviatura(struct Viatura x)
{
	printf("   VIATURA\n");
	printf("  --------------------\n");
	printf("   \t%s \t%s  \t%f\n", x.matricula, x.cor, x.motor);
}



// ================================================= Programa principal

int main()
{
	struct Viatura v1, v2; // declaração de varivel da estrutura
	setlocale(LC_ALL, "");
	printf("Matricula : ");
	scanf(" %s", v1.matricula);
	printf("cor : ");
	scanf(" %s", v1.cor);
	printf("Motor : ");
	scanf(" %f", &v1.motor);
	mostraviatura(v1);

	return 0; 
}
