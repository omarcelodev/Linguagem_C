#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float raio, area;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a área de um círculo.\n");

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("\nA área desse círculo é: %.2fm²\n", area);

    return 0;}
