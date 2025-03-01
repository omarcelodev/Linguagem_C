#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num1, num2, num3;

    printf("Voce vai digitar dois numeros inteiros, um definindo o limite minimo\n e o outro o limite maximo.\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    srand(time(NULL));

    num3 = rand()%num2 + num1;

    printf("O numero sorteado e: %d", num3);


    return 0;}
