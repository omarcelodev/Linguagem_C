#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num, i;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um número de 1 a 5: ");
    scanf("%d", &num);

    while(num < 1 || num > 5){
        if(num < 1 || num > 5){
            printf("\nNuméro inválido\n");

            printf("Redigite: ");
            scanf("%d", &num);
        }
    }

    printf("Número informado está correto.\n");

    return 0;
}
