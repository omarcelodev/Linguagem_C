#include <stdio.h>
#include <locale.h>

int main(){
    float pes, polegadas, jardas, milhas;
    setlocale(LC_ALL, "Portuguese");

    printf("Conversor de pés para outras medidas.\n");

    printf("\nDigite a medida em pés: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("\npés -> polegadas = %.2fin\n", polegadas);
    printf("pés -> jardas = %.2fyd\n", jardas);
    printf("pés -> milhas = %.5fmi\n", milhas);

    return 0;}
