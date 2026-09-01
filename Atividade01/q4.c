#include <stdio.h>

int main()
{
    int salario;
	float aumento;
	float novosalario;

    printf("Digite o salario atual: ");
	scanf("%d", &salario);

	aumento = (salario*0.25);

	novosalario = (salario+aumento);

	printf("O novo salario é: %.2f", novosalario);
    return 0;
}