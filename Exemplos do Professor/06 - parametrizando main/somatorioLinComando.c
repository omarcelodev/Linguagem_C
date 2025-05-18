#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

#define QTDARGS 2

void imprimeSintaxe(void) {
     printf("\nSintaxe para calcular o somatorio dos inteiros de 1 ate 10:");
     printf("\nsomatorioLinComando 1 10\n");
}

int main(int argc, char *argv[]) {
    unsigned long long i, inicio, fim, somatorio = 0;
    bool limiteAtingido = false;

    if (argc != QTDARGS + 1) {
        imprimeSintaxe();
    }
    else {
        inicio = atoll(argv[1]);
        fim = atoll(argv[2]);

        if (inicio == 0 && fim == 0 || fim == 0) {
            imprimeSintaxe();
        }
        else {
            printf("Calculando somatorio de %llu ate %llu...\n", inicio, fim);

            for (i = inicio; i <= fim && !limiteAtingido; i++) {
                 somatorio += i;

                 if (somatorio > ULLONG_MAX - i) {  // Overflow
                     limiteAtingido = true;
                 }
            }

            if (limiteAtingido)
                printf("Overflow (limite maximo atingido): %llu\n", ULLONG_MAX);
            else
                printf("Resultado: %20llu\n", somatorio);
        }
    }

    return(0);
}
