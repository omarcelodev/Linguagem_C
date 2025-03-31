#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Palavra Qualquer\n");
        cont = cont + 1;
    }while(cont < 20);
}
