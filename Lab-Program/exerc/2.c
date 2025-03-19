#include <stdio.h>
#include <stdint.h>

int main()
{
	int tempo;
	int bacteria = 1;

	printf("Dgite um tempo");
	scanf("%d", &tempo);

	for(int i = 0;i < tempo;i++){
		bacteria = bacteria*2;
	}
	printf("Mds ela está se duplicando: %d \n", bacteria);

}

