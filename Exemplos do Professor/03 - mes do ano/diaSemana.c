#include <stdio.h>
#include <time.h>

int main() {

    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int diaDaSemana = local->tm_wday;

    const char *diasDaSemana[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Today is %s\n", diasDaSemana[diaDaSemana]);

    printf("Dia da semana: %d\n", diaDaSemana);
    return 0;
}
