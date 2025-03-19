#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	char name[50];
	printf("Digite seu nome: ");
	scanf("%s", name);

	FILE *FILE = fopen("first_file.txt", "w");
	if (FILE == NULL){
		printf("Error, Memory Alocation Fault");
	}
	fputs("Esse realmente é um arquivo",FILE);
	fprintf(FILE, "O nome é: %s", name);
	fclose(FILE);
}
