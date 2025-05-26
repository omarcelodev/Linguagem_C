#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int imprimirMenu(void){
    int opcao = -1;

    do{
        printf("----------------------------------\n");
        printf("Programa Calculadora Simples\n");
        printf("----------------------------------\n");
        printf("(1) Somar dois números inteiros\n");
        printf("(2) Multiplicar dois números inteiros\n");
        printf("(3) Dividir dois números inteiros\n");
        printf("(4) Calcular a raiz quadrada de um número inteiro\n");
        printf("(0) Encerrar o programa\n");
        printf("Sua opção: ");
        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 4){
            printf("\nOpção Inválida!\n\n\n");
        }

    }while(opcao < 0 || opcao > 4);

    return opcao;
}

int lerNumeroInteiro(char frase[]){
    int num;

    do{
        printf("%s", frase);
        scanf("%d", &num);

        if(num < 0){
            printf("Número Inválido.\n");
        }

    }while(num < 0);

    return num;
}

void somarDoisNumeros(int num1, int num2){
    int soma = num1 + num2;

    printf("\nResultado: %d + %d = %d\n\n\n", num1, num2, soma);

}

void multiplicarDoisNumeros(int num1, int num2){
    int produto = num1 * num2;

    printf("\nResultado: %d x %d = %d\n\n\n", num1, num2, produto);
}

void dividirDoisNumeros(int num1, int num2){
    float quociente;

    while(num2 == 0){

        printf("\nO denominador não pode ser 0\n");
        num2 = lerNumeroInteiro("Digite o segundo número: ");

    }

    quociente = (float)num1 / num2;

    printf("\nResultado: %d / %d = %.2f\n\n\n", num1, num2, quociente);
}

void raizQuadradaNumero(int num1){
    float raiz = sqrt(num1);

    printf("\nResultado: Raiz de %d = %.3f\n\n\n", num1, raiz);

}

void executarOperacao(int opcao){
    int num1, num2;

    switch(opcao){
        case 1:
            printf("\nSomar dois números inteiros:\n");
            printf("---------------------------------\n");

            num1 = lerNumeroInteiro("Digite o primeiro número: ");
            num2 = lerNumeroInteiro("Digite o segundo número: ");

            somarDoisNumeros(num1, num2);

            break;

        case 2:
            printf("\nMultiplicar dois números inteiros:\n");
            printf("---------------------------------\n");

            num1 = lerNumeroInteiro("Digite o primeiro número: ");
            num2 = lerNumeroInteiro("Digite o segundo número: ");

            multiplicarDoisNumeros(num1, num2);

            break;

        case 3:
            printf("\nDividir dois números inteiros:\n");
            printf("---------------------------------\n");

            num1 = lerNumeroInteiro("Digite o primeiro número: ");
            num2 = lerNumeroInteiro("Digite o segundo número: ");

            dividirDoisNumeros(num1, num2);
            break;

        case 4:
            printf("\nCalcular Raiz de um número inteiro:\n");
            printf("---------------------------------\n");

            num1 = lerNumeroInteiro("Digite o número: ");

            raizQuadradaNumero(num1);

            break;

        case 0: printf("Programa encerrado.\n"); break;
        }
}


int main(){
    int opcao;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        opcao = imprimirMenu();
        executarOperacao(opcao);
    }while(opcao != 0);

    return 0;
}
