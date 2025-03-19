// Calcule o comprimento de uma string usando ponteiros e sua aritmética. (Dica: subtrair dois ponteiros
// retorna a quantidade de elementos do tipo do ponteiro que podem caber entre seus endereços)

#include <stdio.h>
int main(int argc, char *argv[]){
	char string[100];
	char *char_pointer = string;
	int string_size = 0;

	printf("Digite seu nome: ");
	scanf("%c", string);

	while (*char_pointer != '\0') {
		string_size++;
	}
	printf("String Size: %d", string_size);
}
