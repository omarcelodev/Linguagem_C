#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 100

int main(){
    int nums[TAM];
    int pares = 0, impares = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    srand(time(NULL));
    for(int i = 0; i <= TAM; i++){
        nums[i] = (rand() % 1000) + 1;
    }

    for(int i = 0; i < TAM; i++){
        if(nums[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    for(int i = 0; i <= TAM; i++){
        printf("[%d] = %d\n", i, nums[i]);
    }

    printf("Numeros Pares: %d\n", pares);
    printf("Números Impares: %d\n", impares);

    return 0;
}
