#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(cont < 20){
        printf("Palavra Qualquer\n");
        cont = cont + 1;
    }
}
