#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um n�mero para descobrir uma esta��o do ano.\n");

    printf("Digite o n�mero: ");
    scanf("%d", &num);

    if(num == 1){
        printf("Primavera");
    } else{
        if(num == 2){
            printf("Ver�o");
        } else{
            if(num == 3){
                printf("outono")
            } else{
}
        }
    }


    return 0;
}
