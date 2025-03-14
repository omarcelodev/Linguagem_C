#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char dateStr [9];
    char timeStr [9];
    char anoAtualString [3];
    int anoAtual;

    _strdate(dateStr);
    printf("O ano da sistema operacional e: %s\n ", dateStr);

    _strtime(timeStr);
    printf("A hora do sistema operacional e: %s\n", timeStr);

    anoAtualString [0] = dateStr [6];
    anoAtualString [1] = dateStr [7];
    anoAtualString [2] = '\0';

    anoAtual = atoi(anoAtualString);
    printf("O ano do sistema operacional: %d\n", anoAtual);


    return 0;}
