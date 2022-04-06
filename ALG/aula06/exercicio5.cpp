#include <stdio.h>
//questão número 5:
int main()
{
  float sal,perc,soma;

	printf("Digite o salario: ");
	scanf("%f%*c", &sal);
	printf("Digite o aumento (em %): ");
	scanf("%f%*c", &perc);
	soma=(sal*perc)/100;
	printf("O aumento sera: %.2f\n", soma);
	printf("e o salario sera: %.2f\n", soma+sal);
  return 0;
}
