#include <stdio.h>
//questão número 8:
int main()
{
  float dep,jur,soma;

	printf("Digite o salario: ");
	scanf("%f%*c", &dep);
	printf("Digite o percentual de juros: ");
	scanf("%f%*c", &jur);
	jur=(dep*jur)/100;
	soma=dep+jur;
	
	printf("O rendimento sera de: %.2f\n", jur);
	printf("O total sera: %.2f\n", soma);
  return 0;
}
