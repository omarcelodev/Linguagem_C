/*
Autor: Marcelo
Data: 28/02/2025
Função do Programa: Gerar 6 numeros aleatorios

Ex004: Escreva um prg em C que gere seis números aleatórios de 1 a 60.
*/


#include<stdio.h>
#include<stdlib.h> /* Standard Library */
#include<time.h> /* "<>" Colchetes Angulares */

int main(){

    int num1, num2, num3, num4, num5, num6;

    /*
    srand() = Inicializa a semente do gerador de numeros aleatorios
    (time(NULL)) = Garante que a semente vai ser sempre diferente da ultima gerada
    */


    srand(time(NULL));

    /*
    rand() = randomizar = aleatorizar
    %n = "delimitar" ate que numero randonizar
    */

    num1 = (rand()%60) + 1;
    num2 = (rand()%60) + 1;
    num3 = (rand()%60) + 1;
    num4 = (rand()%60) + 1;
    num5 = (rand()%60) + 1;
    num6 = (rand()%60) + 1;

    printf("O numero e: %d \n", num1);
    printf("O numero e: %d \n", num2);
    printf("O numero e: %d \n", num3);
    printf("O numero e: %d \n", num4);
    printf("O numero e: %d \n", num5);
    printf("O numero e: %d \n", num6);

    return 0;
}
