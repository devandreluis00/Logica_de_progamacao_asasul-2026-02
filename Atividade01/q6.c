#include <stdio.h>

int main()
{
    int salariobase;
	float gratfic;
	float imposto;
	float salarioareceber;

	printf("Digite o salario base: ");
	scanf("%d", &salariobase);

	gratfic = (salariobase*0.05);
	imposto = (salariobase*0.07);

	salarioareceber = (salariobase + gratfic-imposto);
	printf("O salario liquido é: %.2f", salarioareceber);

    return 0;
}