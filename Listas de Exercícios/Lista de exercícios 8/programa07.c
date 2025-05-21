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

void imprimirNumeros(int num){
    for(int i = 1; i <= num; i++){
        printf("%d\n", i);
    }
}

int main(){
    int num;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    num = lerNumero("Digite um número inteiro Positivo: ");

    num = validacaoNumero(num);

    imprimirNumeros(num);

    return 0;
}
