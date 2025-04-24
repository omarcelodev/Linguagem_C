#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    float nota1 = 0, nota2 = 0, media = 0;
    bool notaInvalida;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        notaInvalida = false;
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        if(nota1 < 0.0 || nota1 > 10.0){
            printf("\nNota Inválida, Redigite!\n\n");
            notaInvalida = true;
        }
    }while(notaInvalida);


    do{
        notaInvalida = false;
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if(nota2 < 0.0 || nota2 > 10.0){
            printf("\nNota Inválida, Redigite!\n\n");
            notaInvalida = true;
        }
    }while(notaInvalida);


    media = (nota1 + nota2) / 2;

    if(media >= 6.0){
        printf("Aprovado.\n");
        printf("Média: %.2f\n", media);

    } else{
        printf("Reprovado.\n");
        printf("Média: %.2f\n", media);
    }


    return 0;
}
