#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num1, num2, i, soma;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++){
        soma += i;
    }

    printf("%d", soma);


    return 0;
}
