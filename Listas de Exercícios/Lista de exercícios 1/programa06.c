#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float raio, area;
    const float PI = 3.141592;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a área de uma circunferência.\n");

    printf("\nDigite o valor do raio: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("O valor da área é: %.6f\n\n", area);

    return 0;}
