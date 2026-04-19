#ifdef _MSC_VER 
#define _CRT_SECURE_NO_WARNINGS 
#endif
#include <stdio.h>
#include <locale.h>	 
void main()
{
// fazer programa que recebe dois números inteiros e mostra o dobro dois dois e soma
	int n1, n2;
	printf("Insira um valor inteiro		: ");
	scanf(" %d", &n1);
	printf("Insira um valor inteiro		: ");
	scanf(" %d", &n2);
	printf(" %d * 2 = %d, %d * 2 = %d, Total = %d", 
	n1, n1 * 2, n2, n2 * 2, n2 * 2 + n1 * 2);

}