#include <stdio.h>
#include <locale.h>

int main(){
    float base, altura, area;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a área de um triângulo.\n");

    printf("\nInsira o valor da base: ");
    scanf("%f", &base);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nA área desse triângulo é: %.2f\n\n", area);

    return 0;}
