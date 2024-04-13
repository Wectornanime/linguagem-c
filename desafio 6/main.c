#include <stdio.h>

int main(void) {
  int n1, n2, soma, sub, mult;
  float div;

  printf("Digite um número inteiro: ");
  scanf("%d", &n1);
  printf("Digite outro número inteiro: ");
  scanf("%d", &n2);

  soma = n1+n2;
  sub = n1-n2;
  mult = n1*n2;
  div = n1/n2;

  printf("Os números digitados foram, %d e %d.\n\nA soma foi: %d \nA diferença foi: %d \nO produto foi: %d \nE o resultado da divisão foi: %.2f", n1, n2, soma, sub, mult, div);
  
  return 0;
}