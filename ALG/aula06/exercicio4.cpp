#include <stdio.h>
//questão número 4:
int main()
{
  float sal, soma;

	printf("Digite o salario: ");
	scanf("%f%*c", &sal);
	soma=sal+(sal*25)/100;

	printf("Novo salario: %.2f\n", soma);

  return 0;
}
