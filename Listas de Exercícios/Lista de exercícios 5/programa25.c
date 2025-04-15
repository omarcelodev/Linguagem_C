#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i, num = 0, soma = 0;
    float media = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++ ){
        soma += i;
        printf("%d", i);

        if( i < num){
            printf(" + ");
        }else{
            printf(" = %d\n", soma);
        }
    }

    media = (float)soma / num;
    printf("%d / %d = %.2f", soma, num, media);

    return 0;
}





