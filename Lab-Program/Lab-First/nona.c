#include <stdio.h>
int main(int argc, char *argv[])
{
  printf("Digite dois valores reais:");
  float number, number2;

  scanf("%f %f", &number, &number2);
  printf("Soma %f \n", number+number2);
  printf("subtração %f \n", number-number2);
  printf("multiplicação %f \n", number*number2);
  printf("Divisão %f \n", number / number2);



}
