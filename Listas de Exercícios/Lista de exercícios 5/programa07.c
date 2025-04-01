#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont;
    char palavra[50];
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(cont = 0; cont < 20; cont = cont + 1){
        printf("%s\n", palavra);
    }

    return 0;
}
