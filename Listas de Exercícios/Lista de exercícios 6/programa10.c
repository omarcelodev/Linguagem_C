#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int i;
    char frase[50];

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    for(i = 0; frase[i] != '\0'; i++){
         printf("%c\n", frase[i]);
    }

}
