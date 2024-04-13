#include <stdio.h>

int main(void) {
  int opcao;
  printf("Escolha uma das opções abaixo:\n");
  printf("[1] - Inglês\n[2] - Espanhol\n[3] - Francês\n[4] - Italiano\n[5] - Alemão\n\n-->");
  scanf("%d", &opcao);


  printf("\n");
  switch (opcao){
    case 1:
      printf("Você escolheu a opção 'inglês'!");
    break;

    case 2:
      printf("Você escolheu a opção 'espanhol'!");
    break;
    
    case 3:
      printf("Você escolheu a opção 'francês'!");
    break;

    case 4:
      printf("Você escolheu a opção 'italiano'!");
    break;

    case 5:
      printf("Você escolheu a opção 'alemão'!");
    break;

    default:
      printf("Você escolheu uma opção inválida!");
    break;
  };
  return 0;
}