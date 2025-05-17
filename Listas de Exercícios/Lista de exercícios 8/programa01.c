#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void imprimirNome(void){
    printf("Marcelo Gomes de Freitas Filho");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    imprimirNome();

    return 0;
}
