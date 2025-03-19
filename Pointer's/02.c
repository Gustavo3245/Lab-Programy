// 2) Crie uma função que preenche um vetor de N posições com valores digitados pelo usuário. Restrição: não
// pode usar o operador colchete para acessar os elementos do vetor.


#include <stdio.h>
#define SIZE 5
int main(int argc, char *argv[]){
	int vetor[SIZE];
	int *pointer_vetor = vetor;
	
	for (int contador = 0; contador < SIZE; contador++) {
		printf("Digite o valor de um numero: ");
		scanf("%d", pointer_vetor);

		pointer_vetor = pointer_vetor + 1;
		puts("");
	}

	for (int contador = 0; contador < SIZE; contador++) {
		printf("valor de um numero: %d \n", vetor[contador]);
	}
	
}
