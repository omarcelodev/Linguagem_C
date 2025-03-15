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

    if(num <= 0 || num > 12){
        printf("Número inválido!");
    } else if(num == 1){
        printf("Você escolheu o mês de Janeiro");
    } else if(num == 2){
        printf("Você escolheu o mês de Fevereiro");
    } else if(num == 3){
        printf("Você escolheu o mês de Março");
    } else if(num == 4){
        printf("Você escolheu o mês de Abril");
    } else if(num == 5){
        printf("Você escolheu o mês de Maio");
    } else if(num == 6){
        printf("Você escolheu o mês de Junho");
    } else if(num == 7){
        printf("Você escolheu o mês de Julho");
    } else if(num == 8){
        printf("Você escolheu o mês de Agosto");
    } else if(num == 9){
        printf("Você escolheu o mês de Setembro");
    } else if(num == 10){
        printf("Você escolheu o mês de Outubro");
    } else if(num == 11){
        printf("Você escolheu o mês de Novembro");
    } else if(num == 12){
        printf("Você escolheu o mês de Dezembro");
    }


    return 0;
}
