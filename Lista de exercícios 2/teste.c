#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    printf("Digite um valor real: ");
    scanf("%lf", &valor);

    double parte_inteira;
    double parte_decimal = modf(valor, &parte_inteira);

    printf("Parte inteira: %.0f\n", parte_inteira);
    printf("Parte decimal: %.6f\n", parte_decimal);

    return 0;
}
