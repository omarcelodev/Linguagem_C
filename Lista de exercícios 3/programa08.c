#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um número para descobrir uma estação do ano.\n");

    printf("Digite o número: ");
    scanf("%d", &num);

    if(num == 1){
        printf("Primavera");
    } else{
        if(num == 2){
            printf("Verão");
        } else{
            if(num == 3){
                printf("outono")
            } else{
}
        }
    }


    return 0;
}
