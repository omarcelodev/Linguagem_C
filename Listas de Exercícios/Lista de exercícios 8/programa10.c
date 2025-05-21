#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 1000

int numeros[TAM];

void preencherNumeros(void){
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        numeros[i] = rand() % (10000 - 1 + 1) + 1;
    }
}

void imprimirNumeros(void){
    printf("Valores Contidos na Array Números:\n");

    for(int i = 0; i < TAM; i++){
        printf("[%d] = %d\n", i, numeros[i]);
    }
}

int calcularSomatorioNumeros(void){
    int soma;

    for(int i = 0; i < TAM; i++){
        soma+= numeros[i];
    }

    return soma;
}

void imprimirSomatorio(int soma){
    printf("\nSomatorio dos valores contidos na array Números = %d\n", soma);
}


int main(){
    int soma = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    preencherNumeros();
    imprimirNumeros();

    soma = calcularSomatorioNumeros();
    imprimirSomatorio(soma);

    return 0;
}

