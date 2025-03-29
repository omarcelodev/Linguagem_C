#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float base, expo, potenc;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a potência de um número(x)^y.\n\n");

    printf("Digite o valor da base(x): ");
    scanf("%f", &base);

    printf("Digite o valor do expoente(y): ");
    scanf("%f", &expo);

    potenc = pow(base, expo);

    printf("\n(%1.f)^%.0f = %.2f\n\n", base, expo, potenc);

    return 0;}
