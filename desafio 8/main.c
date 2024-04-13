#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4, media;
  printf("Informe a 1º nota: ");
  scanf("%f", &n1);
  printf("Informe a 2º nota: ");
  scanf("%f", &n2);
  printf("Informe a 3º nota: ");
  scanf("%f", &n3);
  printf("Informe a 4º nota: ");
  scanf("%f", &n4);

  media = (n1+n2+n3+n4) / 4;

  printf("Sua média é: %.2f\n", media);

  if(media >= 7){
    printf("Aprovado!");
  } else {
    printf("Reprovado!");
  };
  
  return 0;
}