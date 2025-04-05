#include <stdio.h>
#include <conio.h>  // kbhit e getch
#include <stdbool.h>
#include <windows.h>  // Sleep

int main(void) {
    short tecla;
    bool sair = false;

    printf("Tecle ENTER para iniciar a repeticao.\n");
    printf("Tecle ESC para interomper.");
    getch();

    while (!sair) {
          if (kbhit() && getch() == 27) {
              sair = true;
          }
          printf(".");
          fflush(stdout);  // refresh na tela para que o ponto seja impresso imediatamente
          Sleep(50);
    }

    printf("\nTecla ESC pressionada.\n");
    getch();
    return 0;
}
