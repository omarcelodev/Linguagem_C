#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("\nQuantidade de argumentos passados via linha de comando: ");
    printf("%d\n\n", argc);

    for (i = 0; i < argc; i++) {
         printf("%do argumento (indice %d do array argv): %s\n", i + 1, i, argv[i]);
    }

    return(0);
}
