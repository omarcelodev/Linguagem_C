#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int num1=0, num2=0, i=0, somaPares=0, somaImpares=0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um intervalo de dois n�meros inteiros positivos:\n");

    do{
        printf("Digite o Primeiro N�mero: ");
        scanf("%d", &num1);

        printf("Digite o Segundo N�mero: ");
        scanf("%d", &num2);

        if(num1 <= 0 || num2 <= 0 || num1 == num2 || num2 < num1){
            printf("\nIntervalo Inv�lido, tente novamente.\n");
        }

    }while(num1 <= 0 || num2 <= 0 || num1 == num2 || num2 < num1);


    printf("\nSoma dos pares entre %d e %d:\n", num1, num2);

    for(i = num1; i <= num2; i++){
        if(i % 2 == 0){
            somaPares += i;
            printf("%d", i);

            if(i < num2){
                printf(" + ");
            }else{
                printf(" = %d\n", somaPares);
            }

        }
    }

    printf("\nSoma dos impares entre %d e %d:\n", num1, num2);

     for(i = num1; i <= num2; i++){
        if(i % 2 != 0){
            somaImpares += i;
            printf("%d", i);

            if(i < (num2-1) ){
                printf(" + ");
            }else{
                printf(" = %d\n", somaImpares);
            }

        }

    }
    return 0;
}
