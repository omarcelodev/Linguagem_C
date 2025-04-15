#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    int cont = 0, indicador = 0, num = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    srand(time(NULL));

    printf("Numeros da MiniSena:");

    while(cont < 10){
        num = 1 + rand() %100;
        indicador = indicador + 1;

        printf("\n%d°Número: %d\n", indicador, num);
        cont++;
    }

    return 0;
}
