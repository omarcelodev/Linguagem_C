#include <stdio.h>   // para funções de entrada e saída (printf, scanf etc.)
#include <time.h>    // para funções _strdate e _strtime
#include <stdlib.h>  // para função atoi

/** Programa elaborado pelo professor Sandro TC para os
    alunos dos cursos superiores de Engenharia de Software
    e Análise e Desenvolvimento de Sistemas **/

int main(void) {
    char dateStr[9];
    char timeStr[9];
    char anoAtualString[3];
    int anoAtual;

    _strdate(dateStr);  // Captura a data do sistema operacional
    printf("Data do sistema operacional: %s\n", dateStr);

    _strtime(timeStr);  // Captura a hora do sistema operacional
    printf("Hora do sistema operacional: %s\n", timeStr);

    // Captura somente o ano da data e atribui para anoAtualString
    anoAtualString[0] = dateStr[6];
    anoAtualString[1] = dateStr[7];
    anoAtualString[2] = '\0';

    // Converte o conteúdo de anoAtualString (char) para anoAtual (int)
    anoAtual = atoi(anoAtualString);
    printf("Ano do sistema operacional: %d\n", anoAtual);

    return(0);
}
