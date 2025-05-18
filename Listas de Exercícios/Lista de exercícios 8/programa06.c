#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char Mensagem

int lerNumero(void){
    int num;
    printf("Digite o primeiro número: ");
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

    num1 = lerNumero();
    num2 = lerNumero();
    num3 = lerNumero();

    verificarMaiorNumero(num1, num2, num3);

    return 0;
}


