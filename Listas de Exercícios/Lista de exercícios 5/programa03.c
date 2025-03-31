#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(cont = 0; cont < 20; cont++){
        printf("Palavra Qualquer\n");
    }

    return 0;
}
