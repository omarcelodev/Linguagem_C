#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 50

int main(){
    float notas[TAM], soma = 0, media = 0;
    float notaAlterada = 0, maiorNota = -1;
    float menorNota = 11, notaReferencia = 0;

    int i = 0, opcaoMenu = 0, indiceNota = 0, opcaoAlterarOutraNota = 0;

    //i = quantidade de notas.

    bool notaInvalidaAtual;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");



    printf("==========================================\n");
    printf("       SISTEMA DE LANÇAMENTO DE NOTAS     \n");
    printf("==========================================\n");
    printf("Você pode cadastrar até %d notas.\n", TAM);
    printf("Digite -1 a qualquer momento para encerrar \no cadastro de notas.\n");
    printf("------------------------------------------\n\n");



    do{
        do{
            notaInvalidaAtual = false;

            printf("Insira a %dª nota: ", i + 1);
            scanf("%f", &notas[i]);

            if(notas[i] < 0 && notas[i] != -1 || notas[i] > 10){
                printf("\nNota Inválida, Redigite!\n");

                notaInvalidaAtual = true;
            }

        }while(notaInvalidaAtual);

        if(notas[i] == -1){
            break;
        }

        i++;

    }while( i < TAM);

    system("cls");

    do{
        printf("\n\n============================================================\n");
        printf("Escolha uma opção:\n");
        printf("\n(1) Imprimir todas as notas digitadas para conferência\n");
        printf("(2) Calcular e imprimir a média da turma\n");
        printf("(3) Alterar uma nota\n");
        printf("(4) Imprimir a maior nota da turma\n");
        printf("(5) Imprimir a menor nota da turma\n");
        printf("(6) Imprimir as notas acima de uma nota informada\n");
        printf("(7) Imprimir as notas abaixo de uma nota informada\n");
        printf("(0) Encerrar o programa\n");
        printf("Opção: ");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu){
            case 1:
                printf("\nNotas Digitadas:\n");

                for (int j = 0; j < i; j++){
                    printf("Nota %d: %.2f\n", j + 1, notas[j]);
                }

                break;


            case 2:
                printf("Média da turma:\n");

                soma = 0;

                for(int j = 0; j < i; j++){
                    soma+= notas[j];
                }

                media = soma / i;

                printf("A média da turma é %.2f (soma: %.2f / quantidade de notas: %d)\n", media, soma, i);

                break;


            case 3:
                do{
                    indiceNota = 0;
                    printf("\nNotas Digitadas:\n");

                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    do{
                        printf("Qual nota você deseja alterar? (1 a %d): ", i);
                        scanf("%d", &indiceNota);

                        if(indiceNota < 1 || indiceNota> i){
                        printf("Índice inválido! Tente novamente.\n");
                        }

                    }while(indiceNota < 1 || indiceNota > i);


                    do{
                        printf("Digite o novo valor para a nota: ");
                        scanf("%f", &notaAlterada);

                        if(notaAlterada < 0 || notaAlterada> 10){
                        printf("\nNota Inválida, Redigite!\n");
                        }

                    }while(notaAlterada < 0 || notaAlterada > 10);


                    notas[indiceNota- 1] = notaAlterada;


                    printf("\nNota alterada com sucesso.\n");

                    printf("Notas Atualizadas:\n");

                    for (int j = 0; j < i; j++){
                        printf("Nota %d: %.2f\n", j + 1, notas[j]);
                    }

                    printf("\nDeseja alterar outra nota? (1 para sim, 0 para não): ");
                    scanf("%d", &opcaoAlterarOutraNota);

                }while(opcaoAlterarOutraNota == 1);

                break;


            case 4:
                maiorNota = notas[0];
                for(int j = 1; j < i; j++){
                    if(notas[j] > maiorNota){
                        maiorNota = notas[j];
                    }
                }

                printf("A maior nota é: %.2f\n", maiorNota);
                break;

            case 5:
                menorNota = notas[0];
                for(int j = 1; j < i; j++){
                    if(notas[j] < menorNota){
                        menorNota = notas[j];
                    }
                }
                printf("A menor nota é: %.2f\n", menorNota);
                break;

            case 6:
                printf("Informe a nota base: ");
                scanf("%f", &notaReferencia);

                for(int j = 0; j < i; j++){
                    if(notaReferencia < notas[j]){
                        printf("Notas Acima de %.2f", notaReferencia);
                        printf("%.2f\n", notas[j]);
                    }
                }
                break;

            case 7:
                printf("Informe a nota base: ");
                scanf("%f", &notaReferencia);

                for(int j = 0; j < i; j++){
                    if(notaReferencia > notas[j]){
                        printf("Notas Abaixo de %.2f", notaReferencia);
                        printf("%.2f\n", notas[j]);
                    }
                }
                break;

            case 0:
                printf("Programa Encerrado.\n");
                break;
        }
    }while(opcaoMenu != 0);

    return 0;
}
