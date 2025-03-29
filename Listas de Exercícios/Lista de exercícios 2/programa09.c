#include <stdio.h>
#include <locale.h>

int main(){
    float salarioMinimo, quilowatt, umQuilowatt;
    float valorCheio, valorDesconto, valorFinal;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salarioMinimo);

    printf("Quantos Kw sua residência consumiu: ");
    scanf("%f", &quilowatt);

    umQuilowatt = (salarioMinimo / 5) / 100;
    valorCheio = umQuilowatt * quilowatt;
    valorDesconto = valorCheio * 0.15;
    valorFinal = valorCheio - valorDesconto;

    printf("O valor de cada Kw é de R$%.2f\n", umQuilowatt);
    printf("O valor a ser pago é de R$%.2f\n", valorCheio);
    printf("O valor do desconto é de R$%.2f\n", valorDesconto);
    printf("O valor final a se pagar é de R$%.2f\n", valorFinal);



    return 0;}
