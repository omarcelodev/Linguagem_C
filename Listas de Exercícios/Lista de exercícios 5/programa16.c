#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

     while (1) {
        if (kbhit()) { // se algu�m apertou uma tecla
            char tecla = getch(); // captura a tecla
            printf("Voc� pressionou: %c\n", tecla);

            if (tecla == '27') break; // sai do programa se apertar 'q'
        }
    }

    return 0;
}
