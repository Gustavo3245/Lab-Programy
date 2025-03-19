#include <stdio.h>
#include <stdint.h>

int main()
{
	int number;

	printf("Dgite um numero");
	scanf("%d", &number);
	printf("numero ao quadrado: %d \n", number*number);


	while (number != 0) {
	
		printf("Dgite um numero");
		scanf("%d", &number);
		printf("numero ao quadrado: %d \n", number*number);

	}
}
