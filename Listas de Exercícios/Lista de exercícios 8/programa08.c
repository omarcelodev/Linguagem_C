#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lerNumero(char mensagem[]){
    int num;

    printf("%s", mensagem);
    scanf("%d", &num);

    return num;
}

int validacaoNumero(int num){

    do{
        if(num < 1){
            printf("Número Inválido, Redigite: ");
            scanf("%d", &num);
        }
    }while(num < 1);

    return num;
}

void lerPalavra(char palavra[]){


    printf("Digite uma palavra: ");
    scanf("%s", palavra);
}

void imprimirPalavra (int num, char palavra[]){

    for(int i = 1; i <= num; i++){
        printf("[%d]- %s\n", i, palavra);
    }

}

int main(){
    int num;
    char palavra[50];

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    num = lerNumero("Digite um número positivo: ");
    num = validacaoNumero(num);
    lerPalavra(palavra);
    imprimirPalavra(num, palavra);


    return 0;
}

