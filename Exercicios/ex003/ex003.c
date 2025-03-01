/*
Autor:Marcelo
Data:28/02/2025
Função do Programa: Calcular o valor do aumento de salario e apresentar ao usuário o valor de
aumento e o novo salario.

Ex003: Escreva um prg em C que leia o salário de um funcionário e uma porcentagem de aumento.
Em seguida, calcule e imprima o novo salário e o valor que o funcionario receberá de
aumento.*/

#include <stdio.h>

int main(){
    float salario, porcAumento, vlraumento, novoSalario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcAumento);

    vlraumento = (porcAumento/100) * salario;
    novoSalario = vlraumento + salario;


    printf("O aumento vai ser de: R$%.2f\n", vlraumento);

    printf("O novo salario vai ser de: R$%.2f", novoSalario);

    return 0;
}
