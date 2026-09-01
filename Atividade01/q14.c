#include <stdio.h>

int main()
{
   float anonacimento;
	float anoatual;
	float idadepessoa;
	float idadefuturo;
	float somafuturo;

	printf("Digite o ano de nacimento: ");
	scanf("%f", &anonacimento);

	printf("Digite o ano atual: ");
	scanf("%f", &anoatual);


	idadepessoa =(anoatual - anonacimento);

	idadefuturo = (2050-anoatual);

	somafuturo = (idadefuturo + idadepessoa);

	printf("A idade dessa pessoa atual é: %.2f", idadepessoa);
	printf("\n A idade dessa pessoa em 2050 é: %.2f", somafuturo);

    return 0;
}