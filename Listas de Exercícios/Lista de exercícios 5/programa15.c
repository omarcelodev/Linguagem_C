#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    int cont = 0;
    int indicador = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    srand(time(NULL));

    printf("Numeros da MiniSena:");

    while(cont < 10){
        int num = 1 + rand() %100;
        indicador = indicador + 1;

        printf("\n%d�N�mero: %d\n", indicador, num);
        cont = cont + 1;
    }


    return 0;
}
