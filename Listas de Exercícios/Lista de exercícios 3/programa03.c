#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int idade=0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 1 || idade > 123){
        printf("Informe uma idade válida");
    } else{
         if(idade >= 18){
        printf("Você pode tirar sua Habilitação");
        }else{
        printf("Você não pode tirar sua Habilitação");
    }}

    return 0;
}
