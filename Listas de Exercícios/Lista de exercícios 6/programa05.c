#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    int num1 = 0, num2 = 0;
    int i, soma = 0;

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
        }else if(num1 == num2){
            printf("\nIntervalo inválido. Tente novamente!\n");
        }else if(num1 > num2){
            printf("\nIntervalo inválido. Tente novamente!\n");
        }

    }while(num1 < 1 || num1 > 50 || num2 < 1 || num2 > 50 || num1 == num2 || num1 > num2);

    for(i = num1; i <= num2; i++){
        soma += i;
        printf("%d", i);

        if(i < num2){
            printf(" + ");
        }else{
            printf(" = %d", soma);
        }
    }

    return 0;
}

