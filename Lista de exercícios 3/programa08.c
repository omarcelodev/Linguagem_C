#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha uma esta��o de acordo com a tabela abaixo.\n\n");
    printf("C�digo: | Esta��o do ano: \n");
    printf(" 1     ->   Primavera\n");
    printf(" 2     ->   Ver�o\n");
    printf(" 3     ->   Outono\n");
    printf(" 4     ->   Inverno\n");


    printf("\nDigite o n�mero: ");
    scanf("%d", &num);

    if(num <= 0 || num > 4){
        printf("N�mero Inv�lido!");
    } else if(num == 1){
        printf("Esta��o escolhida: Primavera\n");
    } else if(num == 2){
        printf("Esta��o escolhida: Ver�o\n");
    } else if(num == 3){
        printf("Esta��o escolhida: Outono\n");
    } else if(num == 4){
        printf("Esta��o escolhida: Inverno\n");
    }

    return 0;
}
