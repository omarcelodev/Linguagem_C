#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha uma estação de acordo com a tabela abaixo.\n\n");
    printf("Código: | Estação do ano: \n");
    printf(" 1     ->   Primavera\n");
    printf(" 2     ->   Verão\n");
    printf(" 3     ->   Outono\n");
    printf(" 4     ->   Inverno\n");


    printf("\nDigite o número: ");
    scanf("%d", &num);

    switch(num){
        case 1: printf("Estação escolida: Primavera\n"); break;
        case 2: printf("Estação escolida: Verão\n"); break;
        case 3: printf("Estação escolida: Outono\n"); break;
        case 4: printf("Estação escolida: Inverno\n"); break;
        default: printf("Estação inválida\n"); break;
    }

    return 0;
}
