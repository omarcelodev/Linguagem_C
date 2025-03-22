#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha um mês na tabela a abaixo.\n");
    printf("Código: | Mês do ano: \n");
    printf(" 1     ->   Janeiro\n");
    printf(" 2     ->   Fevereiro\n");
    printf(" 3     ->   Março\n");
    printf(" 4     ->   Abril\n");
    printf(" 5     ->   Maio\n");
    printf(" 6     ->   Junho\n");
    printf(" 7     ->   Julho\n");
    printf(" 8     ->   Agosto\n");
    printf(" 9     ->   Setembro\n");
    printf(" 10    ->   Outubro\n");
    printf(" 11    ->   Novembro\n");
    printf(" 12    ->   Dezembro\n");

    printf("Digite um número: ");
    scanf("%d", &num);

    switch(num){
        case 1: printf("Você escolheu o mês de Janeiro\n"); break;
        case 2: printf("Você escolheu o mês de Fevereiro\n"); break;
        case 3: printf("Você escolheu o mês de Março\n"); break;
        case 4: printf("Você escolheu o mês de Abril\n"); break;
        case 5: printf("Você escolheu o mês de Maio\n"); break;
        case 6: printf("Você escolheu o mês de Junho\n"); break;
        case 7: printf("Você escolheu o mês de Julho\n"); break;
        case 8: printf("Você escolheu o mês de Agosto\n"); break;
        case 9: printf("Você escolheu o mês de Setembro\n"); break;
        case 10: printf("Você escolheu o mês de Outubro\n"); break;
        case 11: printf("Você escolheu o mês de Novembro\n"); break;
        case 12: printf("Você escolheu o mês de Dezembro\n"); break;
        default: printf("Insira um mês válido"); break;
    }

    return 0;
}
