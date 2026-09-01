#include <stdio.h>

int main()
{
    float salariobase;
	float gratifica;
	float imposto; 
	float salarioliquido;

	printf("Digite o salario bruto: ");
	scanf("%f", &salariobase);

	gratifica = (50);
	imposto = (salariobase*0.10);

	salarioliquido = (salariobase + gratifica-imposto);
	printf("O salario liquido é: %.2f", salarioliquido);

    return 0;
}