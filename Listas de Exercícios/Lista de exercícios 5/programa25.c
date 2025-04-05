#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i, num = 0, soma = 0;
    float media;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++ ){
        soma = soma + i;
    }

    media = (float)soma / num;

    printf("A média dos numéros de 1 até %d é %.2f\n", num, media);
    return 0;
}





