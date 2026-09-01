#include <stdio.h>
#include <math.h>

int main()
{
    float numeroposi;
    float numeroaoquarado;
    float numeroaocubo;
    float raizquadrada;
    float raizcubica;

    printf("Digite um numero positivo maior que 0: ");
    scanf("%f", &numeroposi);

    numeroaoquarado = numeroposi * numeroposi;
    numeroaocubo = numeroposi * numeroposi * numeroposi;
    raizquadrada = sqrt(numeroposi);
    raizcubica = cbrt(numeroposi);

    printf("O numero digitado e: %.2f\n", numeroposi);
    printf("O numero ao quadrado e: %.2f\n", numeroaoquarado);
    printf("O numero ao cubo e: %.2f\n", numeroaocubo);
    printf("A raiz quadrada e: %.2f\n", raizquadrada);
    printf("A raiz cubica e: %.2f\n", raizcubica);

    return 0;
}