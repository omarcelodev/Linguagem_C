/*
Autor: Marcelo
Data: 28/02/2025
Função do Programa: Converter Celsius para Fahrenheint
Nome: Conversor de Temperatura
*/

#include <stdio.h>

int main(){
    float celsius, fahr;

    printf("Insira a Temperatura em C: ");
    scanf("%f", &celsius);

    fahr = (celsius * 9/5) + 32;

    printf("Convertendo Celsius para Fahreiheint, \n C -> F \n %.2f -> %.2f", celsius, fahr );

    return 0;}
