#include <stdio.h>
//questão número 2:
int main()
{
  float num1, num2, num3, soma;

	printf("Digite uma nota: ");
	scanf("%f%*c", &num1);
	printf("Digite outra nota: ");
	scanf("%f%*c", &num2);
	printf("Digite a ultima nota: ");
	scanf("%f%*c", &num3);
	soma=(num1+num2+num3)/3;

	printf("A media eh: %.2f\n", soma);

  return 0;
}
