#include <stdio.h>

int main()
{
    float raio;
	float area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);

	area = 3.14 * (raio * raio);

	printf("A area do circulo é: %.2f", area);

    return 0;
}