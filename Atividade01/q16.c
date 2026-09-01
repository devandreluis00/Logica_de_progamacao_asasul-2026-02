#include <stdio.h>

int main()
{
    float horatraba;
	float salariomin;
	float valordahora;
	float salariobruto;
	float imposto;
	float salarioareceber;

	printf("Digite as horas trabalhadas: ");
	scanf("%f", &horatraba);

	printf("Digite o salario minimo: ");
	scanf("%f", &salariomin);

	valordahora = (salariomin/2.0);
 
	salariobruto = (horatraba * valordahora);
	
	imposto = (salariobruto * 0.03);

	salarioareceber = (salariobruto-imposto);

	printf("O valor do salario a receber é: %.2f", salarioareceber);

    return 0;
}