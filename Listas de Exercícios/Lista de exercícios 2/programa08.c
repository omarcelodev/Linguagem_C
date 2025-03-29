#include <stdio.h>
#include <locale.h>

int main(){
    int horasTrabalhadas;
    float salarioMinimo, salarioBruto, valorHora, imposto, inss, salarioLiquido;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor do salário mínimo: R$");
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 10 ;
    salarioBruto = horasTrabalhadas * valorHora;
    imposto = salarioBruto * 0.03;
    inss = salarioBruto * 0.11;
    salarioLiquido = salarioBruto - imposto - inss;

    printf("Vc recebe R$%.2f por hora\n", valorHora);
    printf("Seu salário Bruto é de: R$%.2f\n", salarioBruto);
    printf("Vc paga 3%% de imposto, R$%.2f\n", imposto);
    printf("Vc paga 11%% de inss, R$%.2f\n", inss);
    printf("Salário a receber: R$%.2f\n", salarioLiquido);

    return 0;}
