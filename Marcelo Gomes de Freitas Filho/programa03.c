#include <stdio.h>
#include <locale.h>

int main(){
    int num1=0, num2=0, num3=0, soma=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calular a soma de três números.\n\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\n%d + %d + %d = %d\n\n", num1, num2, num3, soma);

    return 0;}
