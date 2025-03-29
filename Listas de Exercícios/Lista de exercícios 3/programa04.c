#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    float resto;
    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    printf("Vamos calcular o resto da divisão de dois números\n");

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    resto = num1%num2;

    printf("O resto de %d/%d é %.2f", num1, num2,resto);

    return 0;
}
