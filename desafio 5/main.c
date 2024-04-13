#include <stdio.h>

int main(void) {
  char nome[20];
  int idade;
  printf("Digite o seu nome: ");
  scanf("%s", nome);
  printf("%s digite sua idade: ", nome);
  scanf("%d", &idade);
  printf("O seu nome é %s e você tem %d anos.", nome, idade);

  return 0;
}