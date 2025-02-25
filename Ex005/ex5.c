#include <stdio.h>

int main(){
    float metros, centimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros*100;

    printf("O Valor em centimetros e: %.2f\n", centimetros);

    return 0;
}
