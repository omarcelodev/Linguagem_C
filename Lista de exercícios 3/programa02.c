#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int idade;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("Você pode tirar sua habilitação");
    }else{
        printf("Você não pode tirar sua habilitação\n");
    }

    return 0;
}
