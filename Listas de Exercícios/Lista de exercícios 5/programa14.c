#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int idade;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        if(idade < 1 || idade > 123 ){
            printf("Digite uma idade válida rapaz.\n");
        }

    }while(idade < 1 || idade > 123);

    printf("Parabéns!!\n");

    return 0;
}

