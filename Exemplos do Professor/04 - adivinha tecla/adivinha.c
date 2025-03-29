#include <stdio.h>
#include <conio.h>  // getch etc.
#include <ctype.h>  // tolower, toupper
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void) {
    char ch = 's';
    char resp;
    char secreto;
    int tentativas;

    setlocale(LC_ALL, "Portuguese");
    system("title Programa Adivinha Letra");
    system("color f0");
    srand(time(NULL));

    while (ch == 's') {
          secreto = rand() % 26 + 'a';
          tentativas = 1;
          system("cls");
          printf("\n\nO computador escolheu uma letra de 'a' ate 'z'. Tente descobrir essa letra.");
          printf("\n\nDigite uma letra de 'a' ate 'z' (ESC para cancelar):\n");

          while ((resp = tolower(getch())) != secreto) {
                if (resp == '\x1B') {  // ESC
                   printf("\n\nPrograma cancelado a pedido do usuario.\n");
                   system("pause");
                   ch = 'n';
                   break;
                }
                printf("%c e' incorreto. Tente novamente\n", resp);
                tentativas++;
          }

          if (ch == 's') {
              printf("\n%c está CORRETO!!\n", resp);
              printf("Voce acertou em %d tentativas <ENTER>\n", tentativas);
              getch();
              printf("\n\nQuer jogar novamente? (s/n): ");
              ch = tolower(getche());
          }
    }

    printf("\n\nFim do programa\n\n");
    return (0);
}
