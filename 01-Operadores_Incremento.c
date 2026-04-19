#include <stdio.h>
void main()
{
	int n = 10;
	printf("Valor de n: %d\n", n);
	n++;
	printf("Valor de n: %d\n", n);
	++n;
	printf("Valor de n: %d\n", n);

	///---------------------------

	n = 100;
	printf("Valor de n: %d\n", ++n); // incrementa e depois 0mostra (101)
	n = 100;
	printf("Valor de n: %d\n", n++); // só incrementa, não mostra, então vai mostrar (100)
	printf("Valor de n: %d\n", n); // agora já mostra a incrementação da linha de cima

	//-----------------------------------------------------------------------



}
