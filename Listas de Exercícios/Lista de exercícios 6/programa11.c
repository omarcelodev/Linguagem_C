#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    int i = 0, contadorDeVogais = 0;
    char frase[100];
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Escreva uma Frase: ");
    fgets(frase, 100, stdin);

    while(frase[i] != '\0'){
        char c = tolower(frase[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            contadorDeVogais++;
        }
        i++;
    }

    printf("A frase possui %d vogais.\n", contadorDeVogais);


    return 0;
}
