#include <stdio.h>
//questão número 1:
int main()
{
  int num1, num2, num3, num4, soma;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("\n%d", &num2);
  printf("Digite o terceiro numero: ");
  scanf("\n%d", &num3);
  printf("Digite o quarto numero: ");
  scanf("\n%d", &num4);
  soma = num1 + num2 + num3 + num4;

  printf("O resultado eh: %d\n", soma);

  return 0;
}
