#include <stdio.h>

int main()
{
    float num1;
	float num2;

	float elevado;

	printf("Digite um numero maior que 0: ");
	scanf("%f", &num1);

	printf("Digite um numero maior que 0: ");
	scanf("%f", &num2);

	elevado = (num1*num2);

	printf("O numero é: %.2f", elevado);

    return 0;
}