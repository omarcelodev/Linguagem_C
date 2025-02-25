#include <stdio.h>

int main(){
    int idade;
    float salario;
    char nome[50], podeViajar;

    printf("Insira a seu nome: ");
    scanf("%s", nome);

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Insira o seu salario: ");
    scanf("%f", &salario);

    printf("Voce pode viajar? Digite s para sim e n para nao: ");
    scanf(" %c", &podeViajar);

    if(podeViajar == 's' || podeViajar == 'S'){
        printf("Ola, %s, voce tem %d anos e ganha %.2f, e voce pode viajar", nome, idade, salario);
    }
    else{
        printf("Ola, %s, voce tem %d anos e ganha %.2f, e voce nao pode viajar", nome, idade, salario);
    }



    return 0;
}
