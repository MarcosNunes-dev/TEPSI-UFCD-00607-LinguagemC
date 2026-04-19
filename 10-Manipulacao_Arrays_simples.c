#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <locale.h>

void mostra(int a[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%d ", a[i]);
	}
}

void main()
{
	setlocale(LC_ALL, "");

	int arrayA[5]; // declaração de um array de inteiros com 5 elementos, contém lixo de memória
	int arrayB[5] = { 23,33 }; // declaração e inicialização de um array  com 5 elementos 
								//os demais elementos são inicializados com zero
	int arrayC[] = { 2, 3, 56 }; // o tamanho é deduzido pela inicialização, neste caso 3 elementos
	int arrayD[16] = { 0 }; // todos os elementos são inicializados com zero
	char arrayE[] = "Coimbra"; // array de caracteres inicializado com a string "Coimbra"
								// o tamanho é 8 (7 caracteres + caractere nulo '\0')+
	char arrayF[25];
	char arrayG[25];
	mostra(arrayA, 5);
	puts ("\n--------------------");
	mostra(arrayB, 5);
	puts("\n--------------------");
	mostra(arrayC, 3);
	puts("\n--------------------");
	mostra(arrayD, 16);
	puts("\n--------------------");
	printf("%s", arrayE); // imprime a string armazenada no arrayE não precisa de:
						// fazer loop, especificar o tamanho, bem como não precisa colocar o & no scanf
	puts("\n--------------------");
	printf("Primeiro Nome: ");
	scanf(" %s", arrayF);
	puts("\n--------------------");
	printf("Sobrenome: ");
	scanf(" %s", arrayG);
	printf(" %s %s", arrayF, arrayG);


}
