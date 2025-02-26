/*Ex001: Escreva um prg em C que leia dois inteiros, calcule a divisão do primeiro
pelo segundo número e imprima a resposta.*/

#include <stdio.h>

int main(){
    int num1=0, num2=0;
    float result=0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    result = (float) num1 / num2;

    printf("%d / %d = %.2f", num1, num2, result);

    return 0;
}
