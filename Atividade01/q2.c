#include <stdio.h>

int main()
{
   int nt1,nt2,nt3;
	float media;

	printf("Digite a Primeira nota: ");
	scanf("%d", &nt1);

	printf("Digite a Segunda nota: ");
	scanf("%d", &nt2);

	printf("Digite a Terceira nota: ");
	scanf("%d", &nt3);

	media = (nt1+nt2+nt3)/3.0;
	printf("A media das notas é: %f", media);
    return 0;
}