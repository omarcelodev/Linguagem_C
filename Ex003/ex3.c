#include <stdio.h>

int main(){
    float num1, num2, soma;
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    printf("A soma dos numeros e: %.2f\n ", soma);


    return 0;
}
