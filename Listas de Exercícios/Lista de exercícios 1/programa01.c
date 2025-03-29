#include <stdio.h>
#include <locale.h>

int main(){
    char nomePessoa [40];
    char emailPessoa [40];
    int livrosLidos=0;
    float salario=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seus dados abaixo.\n\n");

    printf("Digite seu nome completo: ");
    fgets(nomePessoa, 40, stdin);

    printf("Digite seu email: ");
    fgets(emailPessoa, 40, stdin);

    printf("Digite quantos livros você leu no ano passado: ");
    scanf("%d", &livrosLidos);

    printf("Digite seu salário: R$");
    scanf("%f", &salario);

    printf("\n\nDados Informados.\n\n");
    printf("Nome Completo: %s", nomePessoa);
    printf("Email: %s", emailPessoa);
    printf("Livros lidos: %d\n", livrosLidos);
    printf("Salário: R$%.2f\n\n", salario);

    return 0;}
