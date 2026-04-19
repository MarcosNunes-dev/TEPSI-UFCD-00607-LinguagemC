#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define N 25
#define NC 50

int main()
{
	char nome1[N], nome2[N], sobrenome1[N], sobrenome2[N], nomecomple1[NC], nomecomple2[NC];
	setlocale(LC_ALL, "Portuguese");

	printf("Indique o Nome do 1º Aluno: ");
	gets(nome1); // melhor usar isso do que o scanf %28[^/n]

	printf("Indique o Sobrenome do 1º Aluno: ");
	gets(sobrenome1);

	printf("Indique o Nome do 2º Aluno: ");
	gets(nome2);

	printf("Indique o Sobrenome do 2º Aluno: ");
	gets(sobrenome2);

	strcpy(nomecomple1, nome1); 
	strcat(nomecomple1, " ");
	strcat(nomecomple1, sobrenome1);

	strcpy(nomecomple2, nome2);
	strcat(nomecomple2, " ");
	strcat(nomecomple2, sobrenome2);
	puts("*************** nome completo ***************");
	printf(" %s\n", nomecomple1);
	printf(" %s\n", nomecomple2);
	puts("*************** Ordem ***************");

	if(strcmp(nomecomple1, nomecomple2) <= 0)
	{
		printf(" %s\n", nomecomple1);
		printf(" %s\n", nomecomple2);
	}
	else
	{
		printf(" %s\n", nomecomple2);
		printf(" %s\n", nomecomple1);
	}

	return 0;
}