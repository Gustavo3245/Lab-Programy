#include <stdint.h>
#include <stdio.h>


int main()
{
	int valor;	
	int number;

	printf("Digite um tempo");
	scanf("%d", &valor);

	int percorre = valor;

	
	for (int i = 0;i < percorre; i++) {

		int number = (valor * 2) + 1;
		valor = number;
	}
	printf("number: %d", number);

}
