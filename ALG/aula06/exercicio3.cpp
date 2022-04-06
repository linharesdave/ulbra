#include <stdio.h>
//questão número 3:
int main()
{
  float num1, num2, num3, peso1, peso2, peso3, soma, final;

	printf("Digite uma nota: ");
	scanf("%f%*c", &num1);
	printf("Digite seu peso: ");
	scanf("%f%*c", &peso1);
	printf("Digite outra nota: ");
	scanf("%f%*c", &num2);
	printf("Digite seu peso: ");
	scanf("%f%*c", &peso2);
	printf("Digite a ultima nota: ");
	scanf("%f%*c", &num3);
	printf("Digite seu peso: ");
	scanf("%f%*c", &peso3);
	soma = num1*peso1+num2*peso2+num3*peso3;
	final = peso1+peso2+peso3;

	printf("A media eh: %10.2f\n", soma/final);

  return 0;
}
