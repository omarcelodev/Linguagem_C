#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguease");

    float nota1, nota2, nota3, nota4, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A sua média é: %.2f\n", media);

    return 0;
}
