#include <stdio.h> 

 int main()
 {
	// (1)
	int n1,n2,n3,n4;
	float soma;

	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("Digite o Segundo numero: ");
	scanf("%d", &n2);

	printf("Digite o Terceiro numero: ");
	scanf("%d", &n3);

	printf("Digite o Quarto numero: ");
	scanf("%d", &n4);

	soma = (n1+n2+n3+n4);
	printf("A soma é: %f", soma);



     return 0;
 }