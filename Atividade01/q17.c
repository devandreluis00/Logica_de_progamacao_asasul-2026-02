#include <stdio.h>

int main()
{
   	float salario;
	float cheque1;
	float cheque2;
	float cpmf1;
	float cpmf2;
	float saldofinal;

	printf("Digite o salario depositado: ");
	scanf("%f", &salario);

	printf("Digite o valor do primeiro cheque: ");
	scanf("%f", &cheque1);

	printf("Digite o valor do segundo cheque: ");
	scanf("%f", &cheque2);

	cpmf1 = (cheque1 * 0.0038);
	cpmf2 = (cheque2 * 0.0038);

	saldofinal = salario - (cheque1+cpmf1) - (cheque2+cpmf2);

	printf("O saldo final é: %.2f", saldofinal);

    return 0;
}