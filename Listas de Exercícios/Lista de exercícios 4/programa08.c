#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int diaDaSemana = local->tm_wday;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    switch(diaDaSemana){
        case 0: printf("Hoje é Domingo.\n"); break;
        case 1: printf("Hoje é Segunda.\n"); break;
        case 2: printf("Hoje é Terça.\n"); break;
        case 3: printf("Hoje é Quarta.\n"); break;
        case 4: printf("Hoje é Quinta.\n"); break;
        case 5: printf("Hoje é Sexta.\n"); break;
        case 6: printf("Hoje é Sábado.\n"); break;
    }

    return 0;
}
