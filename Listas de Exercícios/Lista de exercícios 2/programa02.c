#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    float num1;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular a raiz quadrada de um número real.\n");

    printf("Digite um número real: ");
    scanf("%f", &num1);

    printf("\nA raiz quadrada de %.2f = %.2f\n", num1, sqrt(num1));

    return 0;}
