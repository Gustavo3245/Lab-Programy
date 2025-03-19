#include <stdio.h>
#include <string.h>

#define SIZE 4
int main(int argc, char *argv[]){
	char vetor[SIZE][30] = {"Joao", "pedro", "lucas", "tiago"};

	for (int i = 0; i < SIZE - 1; i++) {
		
		int posmin = i;

		for (int j = i + 1; j < i; j++) {
			if(strcmp(vetor[j], vetor[i]) < 0){
				posmin = j;
			}

		}

		if(posmin != i){

		}
	}
}
