#include <stdio.h>

int main()
{
    float pes;
    float polegadas;
    float jardas;
    float milhas;

    printf("Digite uma medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("A medida em polegadas e: %.2f\n", polegadas);
    printf("A medida em jardas e: %.2f\n", jardas);
    printf("A medida em milhas e: %.2f\n", milhas);

    return 0;
}