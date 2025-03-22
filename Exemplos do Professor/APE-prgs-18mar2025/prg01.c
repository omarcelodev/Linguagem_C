#include <stdio.h>

int main(void) {
    int idade = 0;

    printf("Entre com a sua idade: ");
    scanf("%d", &idade);

    if (idade <= 0 || idade > 123) {
        printf("\nIdade invalida!");
    }
    else {
        if (idade >= 18) {
            printf("\nVoce pode tirar habilitacao!");
        }
        else {
            printf("\nVoce NAO pode tirar habilitacao!");
        }
    }

    printf("\n\n");
    return 0;
}






