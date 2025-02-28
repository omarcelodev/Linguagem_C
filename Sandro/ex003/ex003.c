/*Escreva um prg em C que leia o salário de um funcionário e uma porcentagem de aumento.
Em seguida, calcule e imprima o novo salário e o valor que o funcionario receberá de
aumento.*/
#include <stdio.h>

int main(){
    float salario, porcentagem, aumento, nsalario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcentagem);

    aumento = (porcentagem/100) * salario;
    nsalario = aumento + salario;


    printf("O aumento vai ser de:R$%.2f\n", aumento);

    printf("O novo salario vai ser de:R$%.2f", nsalario);

    return 0;}
