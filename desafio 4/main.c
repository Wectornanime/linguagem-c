#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4, res;
  
  printf("Digite o valor da 1ª nota: ");
  scanf("%f", &n1);

  printf("Digite o valor da 2ª nota: ");
  scanf("%f", &n2);
  
  printf("Digite o valor da 3ª nota: ");
  scanf("%f", &n3);
  
  printf("Digite o valor da 4ª nota: ");
  scanf("%f", &n4);
  
  res = (n1+n2+n3+n4)/4;
  printf("A média entre as 4 notas é %.2f", res);
  return 0;
}