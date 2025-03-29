#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Vamos descobrir se o número é par ou impar.\n");

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número %d é par", num);
    }else{
        printf("O número %d é ímpar", num);
    }

    return 0;
}
