// Escreva uma função que declara variáveis do tipo inteiro, real e caractere e ponteiros para esses tipos.
// Associe os ponteiros às variáveis e altere seus valores através dos ponteiros. Por fim, imprima os valores das
// variáveis oringinais.



#include <stdio.h>
int main(int argc, char *argv[]){
	int int_type = 10;
	float real_type = 10.1;
	char char_type = 'c';

	int *int_pointer = &int_type;
	float *float_pointer = &real_type;
	char *char_pointer = &char_type;

	printf("value: %d \n", int_type);
	printf("value: %.2f \n", real_type);
	printf("value: %c \n", char_type);
	
	puts("");
	*int_pointer = 30;
	*float_pointer = 30.0;
	*char_pointer = 'a';

	printf("Adress pointer: %p \n", &int_pointer);
	printf("Adress pointer: %p \n", &float_pointer);
	printf("Adress pointer: %p \n", &char_pointer);

	printf("value pointer: %d \n", *int_pointer);
	printf("value pointer: %.2f \n", *float_pointer);
	printf("value pointer: %c \n", *char_pointer);


}
