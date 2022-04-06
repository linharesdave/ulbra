#include <stdio.h>
//questão número 10:
int main()
{
  float area,raio;

	printf("Digite o raio: ");
	scanf("%f%*c", &raio);
	area=3.1415*(raio*raio);
	
	
	printf("A area sera: %.2f\n", area);
  return 0;
}
