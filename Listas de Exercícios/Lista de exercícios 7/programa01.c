#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
    int nums[TAM], i;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite %d números.\n", TAM);

    for(i = 0; i < TAM; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nOs número digitados foram: ");

    for(i = 0; i < TAM; i++){
        printf("\nNúmero: %d\n", nums[i]);
    }

    return 0;
}
