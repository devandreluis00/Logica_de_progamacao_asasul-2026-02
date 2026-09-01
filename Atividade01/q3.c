#include <stdio.h>

int main()
{
    int nt1,nt2,nt3;
	int peso1,peso2,peso3;

	float media;
	float mutipeso1;
	float mutipeso2;
	float mutipeso3;
	float somaresul;
	float somapesos;

	printf("Digite a Primeira nota: ");
	scanf("%d", &nt1);
	printf("Digite o Peso da nota: ");
	scanf("%d", &peso1);

	printf("Digite a Segunda nota: ");
	scanf("%d", &nt2);
	printf("Digite o Peso da nota: ");
	scanf("%d", &peso2);

	printf("Digite a Terceira nota: ");
	scanf("%d", &nt3);
	printf("Digite o Peso da nota: ");
	scanf("%d", &peso3);

	mutipeso1 = (nt1*peso1);
	mutipeso2 = (nt2*peso2);
	mutipeso3 = (nt3*peso3);

	somaresul = (mutipeso1+mutipeso2+mutipeso3);

	somapesos = (peso1+peso2+peso3);

	media = (somaresul/somapesos);
	printf("A media das notas é: %f", media);

    return 0;
}