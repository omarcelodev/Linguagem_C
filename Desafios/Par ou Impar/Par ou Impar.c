/*
Autor: Marcelo
Data: 28/02/2025
Função do Programa: Verificar se o numero e par ou impar
Nome: Par ou Impar
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num %2 ==0){
        printf("O numero %d e par.", num);

    } else{
        printf("O numero %d e impar", num);
    }

    return 0;}
