#include <stdio.h>

void imprimirPalavra(void){//A "Porta" está fechada
    printf("Unigoias");
    //quando não tiver o return precisar colocar o void no começo.
}

int main(){
    system("color 0A");

    imprimirPalavra(); //function call

    return 0;
}

//Função = Modularização
//monolítico = programa com apenas uma função
//Questão de Prova!!! Chamamos a função main de Ponto de entrada de aplicação (Entry Point)
