#include <stdio.h>
#include <locale.h>

int main() {
    float valorSalario;
    char lixoTeclado[20];
    int retorno;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do seu salário: ");
    retorno = scanf("%f", &valorSalario);
    gets(lixoTeclado);
    printf("\n");

    if (retorno == 0) {
        printf("Você não digitou um valor monetário.");
    }
    else {
        if (lixoTeclado[0] == '.') {
            printf("Digite virgula em vez de ponto para as casas decimais.");
        }
        else {
            printf("Você digitou corretamente o valor: %.2f", valorSalario);
        }
    }

    printf("\n");
    return 0;
}
