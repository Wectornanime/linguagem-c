#include <stdio.h>

int main(void) {
  int n1, n2, n3, soma, prod;

  printf("Digite um número inteiro: ");
  scanf("%d", &n1);
  printf("Digite outro número inteiro: ");
  scanf("%d", &n2);

  soma = n1+n2;
  printf("A soma entre %d e %d é %d", n1, n2, soma);
  
  printf("\n\nDigite um terceiro número: ");
  scanf("%d", &n3);

  prod = soma*n3;
  printf("O produto entre %d e %d é %d", soma, n3, prod);
  
  return 0;
}