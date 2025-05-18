#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularSoma(int num1, int num2){
    int soma;

    soma = num1 + num2;

    return soma;

}

int main(){
    int num1, num2, soma;

    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    printf("Digite o Primeiro Número: ");
    scanf("%d", &num1);

    printf("Digite o Segundo Número: ");
    scanf("%d", &num2);

    soma = calcularSoma(num1, num2);

    printf("%d + %d = %d", num1, num2, soma);

    return 0;
}

