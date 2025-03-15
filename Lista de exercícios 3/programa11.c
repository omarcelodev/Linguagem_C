#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int escolha;
    int num1, num2;
    int soma, produto;
    float razao, raiz;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");


    printf("Programa Calculadora Simples.\n\n");

    printf("(1) Somar dois números inteiros\n");
    printf("(2) Multiplicar dois números inteiros\n");
    printf("(3) Dividir dois números inteiros\n");
    printf("(4) Calcular raiz quadrada de um número inteiro\n");
    printf("(0) Encerrar o programa\n\n");

    printf("Sua opção: ");
    scanf("%d", &escolha);


    if(escolha > 4 || escolha < 0 ){
        printf("\nNúmero inválido!\n");
        }else if(escolha == 1){
            printf("\nInsira o primeiro número: ");
            scanf("%d", &num1);
            printf("Insira o segundo número: ");
            scanf("%d", &num2);

            soma = num1 + num2;

            printf("%d + %d = %d\n", num1, num2, soma);

        }else if(escolha == 2){
            printf("\nInsira o primeiro número: ");
            scanf("%d", &num1);
            printf("Insira o segundo número: ");
            scanf("%d", &num2);

            produto = num1 * num2;

            printf("%d x %d = %d\n", num1, num2, produto);

        }else if(escolha == 3){
            printf("\nInsira o primeiro número: ");
            scanf("%d", &num1);
            printf("Insira o segundo número: ");
            scanf("%d", &num2);
                if(num2 == 0){
                    printf("O segundo número deve ser diferente de 0\n");
                }else{
                    razao = (float)num1 / num2;

                    printf("%d / %d = %.2f\n", num1, num2, razao);
                }

        }else if(escolha == 4){
            printf("\nInsira o número: ");
            scanf("%d", &num1);
                if(num1 < 0){
                    printf("Insira um número válido\n");
                }else{
            raiz = sqrt(num1);

            printf("Raiz quadrada de %d = %.3f\n", num1, raiz);
                }

        }else if(escolha == 0){
            printf("Programa encerrado.\n");
            exit(0);
        }

    return 0;
}
