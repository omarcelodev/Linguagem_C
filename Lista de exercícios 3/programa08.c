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

    if(num <= 0 || num > 4){
        printf("Número Inválido!");
    } else if(num == 1){
        printf("Estação escolhida: Primavera\n");
    } else if(num == 2){
        printf("Estação escolhida: Verão\n");
    } else if(num == 3){
        printf("Estação escolhida: Outono\n");
    } else if(num == 4){
        printf("Estação escolhida: Inverno\n");
    }

    return 0;
}
