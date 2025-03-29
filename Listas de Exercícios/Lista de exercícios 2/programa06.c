#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int idadeAtual=0, idadeFutura=0, anoNascimento=0;
    char dateStr[9];
    char anoAtualString[3];
    int anoAtual=0;

    setlocale(LC_ALL, "Portuguese");

    _strdate(dateStr);

    anoAtualString [0] = dateStr [6];
    anoAtualString [1] = dateStr [7];
    anoAtualString [2] = '\0';

    anoAtual = atoi(anoAtualString);

    printf("Insira o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    idadeAtual = (2000 + anoAtual) - anoNascimento;
    idadeFutura = 2050 - anoNascimento;

    printf("Sua idade atual é: %d anos\n", idadeAtual);
    printf("Sua idade em 2050 será: %d anos\n", idadeFutura);

    return 0;}
