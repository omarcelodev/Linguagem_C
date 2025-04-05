#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    int num = 0, i;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(i = 1; i <= 500000; i++){
        printf("%d\n", i);

        if(kbhit()){
            char tecla;
            tecla = getch();
            if(tecla == 27){
                printf("Programa encerrado.\n");
                break;
            }
        }

    }

    return 0;
}

