#include <stdio.h>

int main(void) {
    int opcao = 0, n1, n2, soma;

    printf("\n(1) Somar dois numeros inteiros");
    printf("\n(2) Multiplicar dois numeros inteiros");
    printf("\n(3) Dividir dois numeros inteiros");
    printf("\n(4) Calcular raiz quadrada de um numero inteiro");
    printf("\n(0) Encerrar o programa");
    printf("\nSua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Entre com o primeiro inteiro: ");
                scanf("%d", &n1);
                printf("Entre com o segundo inteiro: ");
                scanf("%d", &n2);
                soma = n1 + n2;
                printf("%d + %d = %d", n1, n2, soma);
                break;
        default: printf("Opcao invalida!");
    }

    return 0;
}
