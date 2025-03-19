#include <stdio.h>
int main(int argc, char *argv[]){
  
  int altura, largura;
  int area;
  
  printf("Digite dois valores:");
  scanf("%d %d", &altura, &largura);
  area = altura * largura;
  printf("%d", area);
}
