#include <stdio.h>
#include <locale.h>

int main(){
    float n1=0, n2=0, n3=0, media=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira abaixo as notas do aluno:\n");

    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/ 3;

    printf("\nA média das notas é: %.2f\n\n", media);

    return 0;}
