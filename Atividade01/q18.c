#include <stdio.h>

int main()
{
    float sacoracao;
	float qntdracao;
	float racaoparadois;
	float restoracao;
	float dias;


	printf("Digite quantos KG tem de racao (EX: 2): ");
	scanf("%f", &sacoracao);

	printf("Digite a quantidade de racao dada para cada gato(EX: 200): ");
	scanf("%f", &qntdracao);

	racaoparadois = (qntdracao*2) / 1000.0;

	dias = (5);

	restoracao = sacoracao - (racaoparadois*dias);

	printf("O resto de racao no saco é de: %.2f KG", restoracao);

    return 0;
}