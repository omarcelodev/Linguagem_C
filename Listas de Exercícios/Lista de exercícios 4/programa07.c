#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char simb;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("S�mbolos:(. , : / \ | ; { } ( ) [ ] @ ! $ * &)\n");

    printf("Digite algum dos s�mbolos: ");
    scanf("%c", &simb);

    printf("Simbolo %c", simb);

    return 0;
}
