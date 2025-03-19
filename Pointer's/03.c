// Crie uma função que preenche um vetor de N posições com valores digitados pelo usuário. Restrição: não
// pode usar o operador colchete para acessar os elementos do vetor.



#include <stdio.h>
#define SIZE 5


int main(int argc, char *argv[]){
	int vetor[SIZE];
	int *pointer_vetor = vetor;
	int soma;


	for (int contador = 0; contador < SIZE; contador++) {
		printf("Digite o valor de um numero: ");
		scanf("%d", pointer_vetor);
		pointer_vetor++;
	}
	puts("");

	for (int contador = 0; contador < SIZE; contador++) {
		soma = soma + *(vetor + contador);
	}
	soma = soma / 5;
	printf("valor: %d \n", soma);
}
