#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char simb;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Símbolos:(. , : / \ | ; { } ( ) [ ] @ ! $ * &)\n");

    printf("Digite algum dos símbolos: ");
    scanf("%c", &simb);

    printf("Simbolo %c", simb);

    return 0;
}
