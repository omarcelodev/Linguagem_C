#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escolha um m�s na tabela a abaixo.\n");
    printf("C�digo: | M�s do ano: \n");
    printf(" 1     ->   Janeiro\n");
    printf(" 2     ->   Fevereiro\n");
    printf(" 3     ->   Mar�o\n");
    printf(" 4     ->   Abril\n");
    printf(" 5     ->   Maio\n");
    printf(" 6     ->   Junho\n");
    printf(" 7     ->   Julho\n");
    printf(" 8     ->   Agosto\n");
    printf(" 9     ->   Setembro\n");
    printf(" 10    ->   Outubro\n");
    printf(" 11    ->   Novembro\n");
    printf(" 12    ->   Dezembro\n");

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num <= 0 || num > 12){
        printf("N�mero inv�lido!");
    } else if(num == 1){
        printf("Voc� escolheu o m�s de Janeiro");
    } else if(num == 2){
        printf("Voc� escolheu o m�s de Fevereiro");
    } else if(num == 3){
        printf("Voc� escolheu o m�s de Mar�o");
    } else if(num == 4){
        printf("Voc� escolheu o m�s de Abril");
    } else if(num == 5){
        printf("Voc� escolheu o m�s de Maio");
    } else if(num == 6){
        printf("Voc� escolheu o m�s de Junho");
    } else if(num == 7){
        printf("Voc� escolheu o m�s de Julho");
    } else if(num == 8){
        printf("Voc� escolheu o m�s de Agosto");
    } else if(num == 9){
        printf("Voc� escolheu o m�s de Setembro");
    } else if(num == 10){
        printf("Voc� escolheu o m�s de Outubro");
    } else if(num == 11){
        printf("Voc� escolheu o m�s de Novembro");
    } else if(num == 12){
        printf("Voc� escolheu o m�s de Dezembro");
    }


    return 0;
}
