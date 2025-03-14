#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float num1, parteInteira, parteDecimal;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número real: ");
    scanf("%f", &num1);

    parteDecimal = modff(num1, &parteInteira);

    printf("Arredondado para cima: %.2f\n", ceil(num1));
    printf("Arredondado para baixo: %.2f\n", floor(num1));
    printf("Parte inteira: %.0f\n", parteInteira);
    printf("Parte decimal: %.2f\n", parteDecimal);

    return 0;}
