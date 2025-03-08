#include <stdio.h>
#include <locale.h>
int main(){
    float salario, novoSalario, porcentAument, aumento;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos calcular o aumento do seu salário.\n\n");

    printf("Digite o seu salario: R$");
    scanf("%f", &salario);

    printf("Porcentagem de aumento: ");
    scanf("%f", &porcentAument);

    aumento = (porcentAument * salario) / 100;
    novoSalario = aumento + salario;

    printf("\nO valor do aumento que você vai receber é de: R$%.2f\n", aumento);
    printf("O seu novo salário vai ser de: R$%.2f\n\n", novoSalario);


    return 0;}
