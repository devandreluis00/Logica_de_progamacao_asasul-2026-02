#include <stdio.h>

int main()
{
    float basetri;
	float alturatri;
	float areatri;

	printf("Digite a base do triangulo: ");
	scanf("%f", &basetri);

	printf("Digite a altura do triangulo: ");
	scanf("%f", &alturatri);

	areatri = (basetri*alturatri)/2;
	printf("A area do triangulo é: %.2f", areatri);

	//(10)
	float raio;
	float area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);

	area = 3.14 * (raio * raio);

	printf("A area do circulo é: %.2f", area);

    return 0;
}