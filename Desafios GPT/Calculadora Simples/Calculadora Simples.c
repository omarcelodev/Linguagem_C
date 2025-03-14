/*
Autor: Marcelo
Data: 25/02/2025
Função do Programa: Fazer operações aritmeticas com 2 numeros
Nome: Calculadora Simples
*/

#include <stdio.h>

int main(){
    int num1, num2;
    float soma, subtracao, divisao, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = (float)num1 + num2;

    subtracao = (float)num1 - num2;

    divisao = (float) num1 / num2;

    multiplicacao = num1 * num2;

    printf("Os resultados sao:\n");
    printf("%d + %d = %.2f\n", num1, num2, soma);
    printf("%d - %d = %.2f\n", num1, num2, subtracao);
    printf("%d / %d = %.2f\n", num1, num2, divisao);
    printf("%d x %d = %.2f\n", num1, num2, multiplicacao);


    return 0;}
