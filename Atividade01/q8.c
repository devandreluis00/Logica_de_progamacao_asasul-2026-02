#include <stdio.h>

int main()
{
float deposito;
	float taxajuros;

	float rendimentos;
	float valortotal;


	printf("Digite o valor do deposito: ");
	scanf("%f", &deposito);

	printf("Digite o valor da taxa de juros: ");
	scanf("%f", &taxajuros);

	rendimentos = deposito * (taxajuros/100);
	valortotal = (deposito + rendimentos);

	printf("O valor do rendimento é: %.2f", rendimentos);
	printf("O valor total depois do rendimento é: %.2f", valortotal);

    return 0;
}