#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 50

int main(){
    float notas[TAM], soma = 0, media = 0, altnota = 0;
    int i = 0, opcao = 0, indice = 0, opcaoC3;
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

    do{
        printf("\n============================================================\n");
        printf("Escolha uma op��o:\n");
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
                printf("\nNotas Digitadas:\n");
                for (int j = 0; j < i; j++){
                    printf("Nota %d: %.2f\n", j + 1, notas[j]);
                }
                break;

            case 2:
                printf("M�dia da turma:\n");

                soma = 0;

                for(int j = 0; j < i; j++){
                    soma+= notas[j];
                }

                media = soma / i;

                printf("A m�dia da turma � %.2f (soma: %.2f / quantidade de notas: %d)\n", media, soma, i);
                break;

            case 3:
                do{
                    indice = 0;
                    printf("\nNotas Digitadas:\n");

                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    do{
                        printf("Qual nota voc� deseja alterar? (1 a %d): ", i);
                        scanf("%d", &indice);

                        if(indice < 1 || indice > i){
                        printf("�ndice inv�lido! Tente novamente.\n");
                        }
                    }while(indice < 1 || indice > i);

                    do{
                        printf("Digite o novo valor para a nota: ");
                        scanf("%f", &altnota);

                        if(altnota < 0 || altnota > 10){
                        printf("\nNota Inv�lida, Redigite!\n");
                        }
                    }while(altnota < 0 || altnota > 10);

                    notas[indice - 1] = altnota;

                    printf("\nNota alterada com sucesso.\n");

                    printf("Notas Atualizadas:\n");
                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    printf("\nDeseja alterar outra nota? (1 para sim, 0 para n�o): ");
                    scanf("%d", &opcaoC3);

                }while(opcaoC3 == 1);

                break;

            case 0:
                printf("Programa Encerrado.\n");
                break;
        }
    }while(opcao != 0);

    return 0;
}
