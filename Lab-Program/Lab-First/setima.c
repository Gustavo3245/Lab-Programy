#include <stdio.h>
int main(int argc, char *argv[])
{
  printf("Digite 2 Valores:");
  int determ, number, number2;
  
  scanf("%d %d", &number, &number2);
  
  determ = number;
  number2 = number;
  number = determ;

  printf("%d %d ", number, number2);
}
