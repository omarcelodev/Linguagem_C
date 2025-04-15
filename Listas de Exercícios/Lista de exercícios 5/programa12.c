#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num = 1;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(num != 0){
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
    }

    printf("Programa Encerrado.\n");

    return 0;
}
