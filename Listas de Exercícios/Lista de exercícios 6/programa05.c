#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    int num1 = 0, num2 = 0;
    int i = 0, soma = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite dois valores entre 1 e 50.\n");
        printf("Primeiro Valor: ");
        scanf("%d", &num1);
        printf("Segundo Valor: ");
        scanf("%d", &num2);

        if(num1 < 1 || num1 > 50 || num2 < 1 || num2 > 50){
            printf("\nIntervalo inválido. Tente novamente!\n");
        } else if(num1 == num2){
            printf("\nIntervalo inválido. Tente novamente!\n");
        } else if(num1 > num2){
            printf("\nIntervalo inválido. Tente novamente!\n");
        }

    }while(num1 < 1 || num1 > 50 || num2 < 1 || num2 > 50 || num1 == num2 || num1 > num2);


    while(i < soma){
        soma = nu

    }


    return 0;
}

