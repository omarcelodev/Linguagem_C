#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    char resposta;
    bool resultado;
    setlocale(LC_ALL, "Portuguese");

    printf("Você já programou em linguagem C antes da nossa disciplina?\n");

    printf("Pressione 's' para sim e 'n' para não: ");
    scanf("%c", &resposta);

    if(resposta == 's' || resposta == 'S'){
        resultado = true;

    } else{
        resultado = false;
    }

    return 0;}
