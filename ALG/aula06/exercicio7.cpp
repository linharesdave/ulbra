#include <stdio.h>
//questão número 7:
int main()
{
  float sal,perc,grat,soma;

	printf("Digite o salario: ");
	scanf("%f%*c", &sal);
	soma=(sal+50);
	perc=(sal*10)/100;
	
	printf("O salario sera: %.2f\n", soma-perc);
  return 0;
}
