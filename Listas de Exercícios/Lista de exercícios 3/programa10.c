#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, media;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Cálculo de média Universitária.\n");

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if(media <= 3){
        printf("média = %.2f Reprovado", media);
    }else if (media > 3 && media <=6.9){
        printf("média = %.2f Exame", media);
    }else if (media >= 7.0 && media <=10){
        printf("média = %.2f Aprovado", media);
    }

    return 0;
}
