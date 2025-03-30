#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
    char simb;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Símbolos:(. , : / \\ | ; { } ( ) [ ] @ ! $ * &)\n");

    printf("Digite algum dos símbolos: ");
    simb = getche();

    switch(simb){
        case 46: printf("\n\nSímbolo: '%c' Nome: Ponto\n", simb); break;
        case 44: printf("\n\nSímbolo: '%c' Nome: Vírgula\n", simb); break;
        case 58: printf("\n\nSímbolo: '%c' Nome: Dois Pontos\n", simb); break;
        case 47: printf("\n\nSímbolo: '%c' Nome: Barra(slash)\n", simb); break;
        case 92: printf("\n\nSímbolo: '%c' Nome: Barra Invertida(backslash)\n", simb); break;
        case 124: printf("\n\nSímbolo: '%c' Nome: Pipe\n", simb); break;
        case 59: printf("\n\nSímbolo: '%c' Nome: Ponto e Vírgula\n", simb); break;
        case 123: printf("\n\nSímbolo: '%c' Nome: Chave Aberta\n", simb); break;
        case 125: printf("\n\nSímbolo: '%c' Nome: Chave Fechada\n", simb); break;
        case 40: printf("\n\nSímbolo: '%c' Nome: Parênteses Aberto\n", simb); break;
        case 41: printf("\n\nSímbolo: '%c' Nome: Parênteses Fechado\n", simb); break;
        case 91: printf("\n\nSímbolo: '%c' Nome: Colchete Aberto\n", simb); break;
        case 93: printf("\n\nSímbolo: '%c' Nome: Colchete Fechado\n", simb); break;
        case 64: printf("\n\nSímbolo: '%c' Nome: Arroba\n", simb); break;
        case 33: printf("\n\nSímbolo: '%c' Nome: Exclamação\n", simb); break;
        case 36: printf("\n\nSímbolo: '%c' Nome: Cifrão\n", simb); break;
        case 42: printf("\n\nSímbolo: '%c' Nome: Asterisco\n", simb); break;
        case 38: printf("\n\nSímbolo: '%c' Nome: Ampersand\n", simb); break;
        default: printf("\nSímbolo Inválido");
    }

    return 0;
}
