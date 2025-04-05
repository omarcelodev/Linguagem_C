#include <stdio.h>
#include <conio.h>

int main(void) {
    char key;
    char password[20] = "";
    int i = 0;

    printf("Senha: ");

    while (key != 13) {
        key = getch();
        password[i++] = key;

        if (i > sizeof(password) - 2)
            break;

        if (key != 13)
            printf("*");
    }

    printf("\n\nSenha digitada: %s\n\n", password);
    return(0);
}
