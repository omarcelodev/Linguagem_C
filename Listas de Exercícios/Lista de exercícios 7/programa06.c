#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 50

int main(){
    float notas[TAM];
    int i = 0, opcao, notasDigitadas = i;
    bool notaInvalida;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("==========================================\n");
    printf("       SISTEMA DE LAN�AMENTO DE NOTAS     \n");
    printf("==========================================\n");
    printf("Voc� pode cadastrar at� %d notas.\n", TAM);
    printf("Digite -1 a qualquer momento para encerrar \no cadastro de notas.\n");
    printf("------------------------------------------\n\n");

    do{
        do{
            notaInvalida = false;
            printf("Insira a %d� nota: ", i + 1);
            scanf("%f", &notas[i]);

            if(notas[i] < 0 && notas[i] != -1 || notas[i] > 10){
                printf("\nNota Inv�lida, Redigite!\n");
                notaInvalida = true;
            }

        }while(notaInvalida);

        if(notas[i] == -1){
            break;
        }

        i++;

    }while( i < TAM);

    printf("\n(1) Imprimir todas as notas digitadas para confer�ncia\n");
    printf("(2) Calcular e imprimir a m�dia da turma\n");
    printf("(3) Alterar uma nota\n");
    printf("(4) Imprimir a maior nota da turma\n");
    printf("(5) Imprimir a menor nota da turma\n");
    printf("(6) Imprimir as notas acima de uma nota informada\n");
    printf("(7) Imprimir as notas abaixo de uma nota informada\n");
    printf("(0) Encerrar o programa\n");
    printf("Op��o: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            for(int i = 0; i < notasDigitadas; i++){
                printf("%.2f", notas[i]);
            }
            break;
    }

    return 0;
}
