#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int lerNumero(char mensagem[]){
    int num;

    printf("%s", mensagem);
    scanf("%d", &num);

    return num;
}

void verificarMaiorNumero(int num1, int num2, int num3){

    if(num1 > num2 || num1 > num3){
        printf("O número %d é o maior", num1);

    }else if(num2 > num3){
        printf("O número %d é o maior", num2);

    }else{
        printf("O número %d é o maior", num3);
    }
}

int main(){
    int num1, num2, num3;

    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    num1 = lerNumero("Digite o primeiro numero: ");
    num2 = lerNumero("Digite o segundo numero: ");
    num3 = lerNumero("Digite o terceiro numero: ");

    verificarMaiorNumero(num1, num2, num3);

    return 0;
}


