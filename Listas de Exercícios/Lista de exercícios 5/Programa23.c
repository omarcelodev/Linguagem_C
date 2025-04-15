
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num1, num2, cont;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num2 < num1){
        printf("Intervalo Inválido\n");
    } else{
        for(cont = num1; cont <= num2; cont = cont + 1){
            printf("%d\n", cont);
        }
    }

    return 0;
}





