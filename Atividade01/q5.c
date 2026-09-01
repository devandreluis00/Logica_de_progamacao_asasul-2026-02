#include <stdio.h>

int main()
{
   int salario;
	int aumento;
	float aumentofinal;
	float aumentoporcento;
	float novosalario;


    printf("Digite o salario atual: ");
	scanf("%d", &salario);

	printf("Digite o aumento (Ex: 75): ");
	scanf("%d", &aumento);

	aumentoporcento = (aumento/100.0);

	aumentofinal = (salario*aumentoporcento);

	novosalario = (salario+aumentofinal);
	
	printf("O novo salario é: %f", novosalario);
	printf("\nO novo aumento é de: %f", aumentofinal);

    return 0;
}