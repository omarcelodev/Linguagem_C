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

char lerPalavra(){
    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    return palavra;
}

int main(){
    int num;
    char palavra[50];

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    num = lerNumero("Digite um número positivo: ");

    num = validacaoNumero(num);

    palavra[50] = lerPalavra(palavra);

    printf("%s", palavra);


    return 0;
}

