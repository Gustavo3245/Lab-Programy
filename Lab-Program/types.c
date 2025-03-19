#include <stdio.h>

int main()
{
  char nome[] = "gato";
  for(int i = 0; nome[i] != '\0'; i++){
    printf("%d \n", nome[i]);

    int argumento;
    scanf("%d", &argumento);
    printf("%d", argumento);
  }
}
