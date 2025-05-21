#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int lerNumero (char mensagem[]){
    int num;

    printf("%s", mensagem);
    scanf("%d", &num);

    return num;
}

bool verificarIntervalo(int num1, int num2){
    if( num1 > num2){
        printf("\nIntervalo Inválido!\n");
        return true;

    }else{
        return false;
    }
}

void imprimirIntervalo(int num1, int num2){
    printf("Números do Intervalo:\n");
    for(int i = num1; i <= num2; i++){
        printf("%d\n", i);
    }
}

int main(){
    int num1, num2;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um intervalo de números.\n");

    num1 = lerNumero("Digite o primeiro número: ");
    num2 = lerNumero("Digite o segundo número: ");

    if(verificarIntervalo(num1, num2)){
        printf("Programa Encerrado\n");
    }else{
        imprimirIntervalo(num1, num2);
    }

    return 0;
}

