#include <stdio.h>
//questão número 6:
int main()
{
  float sal,grat,imp,soma;

	printf("Digite o salario: ");
	scanf("%f%*c", &sal);
	grat=(sal*5)/100;
	imp=(sal*7)/100;
	soma=(sal+grat-imp);
	printf("O salario sera: %.2f\n", soma);
  return 0;
}
