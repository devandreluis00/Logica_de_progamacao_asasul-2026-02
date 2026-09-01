#include <stdio.h>

int main()
{
    float carronovo;
	float somapreco;
	float percelucro;
	float imposto;
	float porcentodis;
	float porcentoimposto;

	printf("Digite o valor do carro(Preco de fabrica): ");
	scanf("%f",&carronovo );

	printf("Digite o valor do lucro do distribuidor(EX: 50): ");
	scanf("%f",&percelucro);

	printf("Digite o valor dos impostos(EX: 50): ");
	scanf("%f",&imposto);

	porcentodis = carronovo * (percelucro/100);
	porcentoimposto = carronovo * (imposto/100);

	somapreco = (carronovo + porcentodis + porcentoimposto);

	printf("\nO valor correspondente ao lucro do distribuidor: %.2f", porcentodis);
	printf("\nO valor correspondente aos impostos: %.2f", porcentoimposto);
	printf("\nO preço final do veículo: %.2f", somapreco);

    return 0;
}