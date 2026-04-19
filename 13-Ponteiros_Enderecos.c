#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h> // para fazer o sorteio
#include <time.h>

void main()
{
	int x=100;
	int* pont1; // o ponteiiro é definido pelo *
	int *pont2 = &x; // ponteiro que guarda o enderecço de um inteiro neste caso o de x
						// & serve para indicar o endereço "memoria"
	
	printf("Valor de  X: %d\n", x);						//100
	printf("Valor apontado por pont2: %d\n", *pont2);	//100

	x = 200;

	printf("Valor de  X: %d\n", x);						//200
	printf("Valor apontado por pont2: %d\n", *pont2);	//200

	pont2 = &x; // isso aqui posso fazer pois estou apontando para o endereço da variavel
	*pont2 =300; //isso tbm pode fazer, pois, estou indicando que para o endereço que o ponteiro está 
				// apontado vai tomar valor de 3000
	 // pont1 = 10; " ponteiro não recebe valor, só recebe endereço de varivel

	 pont1= &x;
	 *pont2 = 333;

	 printf("Valor de  X: %d\n", x);						//333
	 printf("Valor apontado por pont1: %d\n", *pont1);		//333
	 printf("Valor apontado por pont2: %d\n", *pont2);		//333
	
	
	return 0;
}

