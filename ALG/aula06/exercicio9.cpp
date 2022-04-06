#include <stdio.h>
//questão número 9:
int main()
{
  float area,base,alt;

	printf("Digite a base: ");
	scanf("%f%*c", &base);
	printf("Digite a altura: ");
	scanf("%f%*c", &alt);
	area=(base+alt)/2;
	
	printf("A area do triangulo eh: %.2f",area);
  return 0;
}
