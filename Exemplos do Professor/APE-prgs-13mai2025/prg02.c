#include <stdio.h>

int lerNumero(char mensagem[]) {
    int numero;

    printf("%s", mensagem);
    scanf("%d", &numero);

    return numero;
}

int obterMaiorDeTres(int a, int b, int c) {
    int maior;

    if (a > b && a > c) {
        maior = a;
    } else {
        if (b > c) {
            maior = b;
        } else {
            maior = c;
        }
    }

    return maior;
}

void imprimirMaiorNumero(int maior) {
    printf("O maior numero e' %d\n\n", maior);
}

void imprimirMensagem(void) {
    printf("Este programa descobre o maior de 3 numeros inteiros\n\n");
}

int main(void) {
    int x, y, z, maior;

    imprimirMensagem();

    x = lerNumero("Entre com o primeiro numero: ");
    y = lerNumero("Entre com o segundo numero: ");
    z = lerNumero("Entre com o terceiro numero: ");

    maior = obterMaiorDeTres(x, y, z);
    imprimirMaiorNumero(maior);
    return 0;
}
