#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // biblioteca para usar malloc, calloc e realloc

int main()
{
	setlocale(LC_ALL, "Portuguese");
	// memoria dinâmica

	// *v
	// v[10]
	// se e colocar *v apotado para array vai ser a posição zero da array.
	//se fizer *(v+1) vai mostrar a posição seguinte. 


	// MODELO DE MEMÓRIA ESTÁTICA
	int *p, n;
	printf("Diga quantos N: "); // pede ao utilizador a quantidade
	scanf("%d", n); // guarda 
	p = malloc(sizeof(int)* n); // multiolica a quantidade de bytes pelos números
	if (p == NULL)
		printf("Erro na alocaçao de memória.\n");
		else
		{
			for (int i = 0; i < n; i++)
			{
				printf("Valor para posição %d", i);
				scanf(" %d", (p + 1));
			}
		}
	for (int i = 0; i < n; i++) 
		printf("Valor  %d = %d\n", i, *(p + 1));
	free(p); // para libertar a memória. obs não apaga, sempre usar!!!!
	getch();
	

}
void *malloc(size_t tam) // devolve um ponteiro para void, genérico, só bytes 
{
	int* p, n;
	p = malloc(sizeof(int) * n);
}
void *calloc(num_elementos, tam) // devolve um ponteiro para void, genérico, só bytes 
{
	// calloc, reserva espaço na memória, mas tbm limpa a memória, tornando o mais lento

	int *p;
	p = (int *) calloc (1, sizeof(int));
}
void* realloc(void *p, size_t tam) 
{
	// permite a realocação da memória
	//aloca um novo espaço e tranfere os dados anteriores existentes para do o novo espaço
}
void free (void *p) // para libertar a memória, sempre usar. 

// ESTRUTURAS

/*
arrays são um tipo de estrutura.
Estruturas suportam um número de variáveis do mesmo tipo
vantagem é agrupar esses dados e trabalhar em grupo.

ARRAY - variaveis de um uníco tipo

struct é possivel agrupar o mais variados tipo de variáveis e formar um bloco de estrutura.
este bloco de daados (variáveis ou estruturas)

COMO USAR:

para 300 clientes
3 -array*/
char nome[300][100]
char nConta[300][15]
int saldo[300]

struct NomedaStruct
{
	tipos nomedosTipos;
}


//essas são as variáveis: para acessar as variavel é "clix.nome"
struct cliente clix;
struct cliente melhorcliente;
struct cliente pior;
struct cliente todos[300];

typedef struct alunos // para "redefinir" o nome da estratura, na verdade da um segundo nome 
{
	// coloco a estrutura aqui
}Aluno; // aqui vc redefine o nome 
// as estruturas são definidas com a primeira letra Maiúsucula. 

