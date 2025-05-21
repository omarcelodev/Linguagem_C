#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float lerNota(char mensagem[]){
    float nota;

    do{
        printf("%s", mensagem);
        scanf("%f", &nota);

        if(nota < 0.0 || nota > 10.0){
            printf("Nota Inválida.\n\n");
        }
    }while(nota < 0.0 || nota > 10.0);

    return nota;
}

float calcularMedia(float nota1, float nota2, float nota3){

    return (nota1 + nota2 + nota3) / 3.0;

}

void imprimirResultado(float media){
    printf("\nA média do aluno foi: %.1f\n", media);

    if(media <= 3.0){
        printf("Reprovado\n");
    }else if(media < 7.0){
        printf("Exame\n");
    }else{
        printf("Aprovado\n");
    }
}

int main(){
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, media = 0.0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Calcular média e resultado do aluno.\n\n");

    nota1 = lerNota("Insira a primeira nota: ");
    nota2 = lerNota("Insira a segunda nota: ");
    nota3 = lerNota("Insira a terceira nota: ");

    media = calcularMedia(nota1, nota2, nota3);

    imprimirResultado(media);

    return 0;
}

