
#include <stdio.h>


int main(int argc, char *argv[]){

	int vetor_size;
	printf("Digite o número total de elementos: ");
	scanf("%d", &vetor_size);

	int vetor[vetor_size];
	int high_number = 0;


	for (int contador = 0; contador < vetor_size; contador++) {
		printf("Digite o valor de um numero: ");
		scanf("%d", &vetor[contador]);

		if(high_number < vetor[contador]){
			high_number = vetor[contador];
		}
	}
	puts("");
	printf("O maior numero é: %d \n", high_number);
}

