#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int min, max, num3;

    printf("Voce vai digitar dois numeros inteiros, um definindo o limite minimo\ne o outro o limite maximo.\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &min);

    printf("Digite o segundo numero: ");
    scanf("%d", &max);

    srand(time(NULL));

    if(min > max){
        int temp = min;
        min = max;
        max = temp;
    }

    num3 = rand()%(max - min + 1) + min;

    printf("O numero sorteado e: %d", num3);


    return 0;}
