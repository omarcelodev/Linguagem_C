#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 50

int main(){
    int nums[TAM], i = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    srand(time(NULL));
    while( i <= TAM){
        nums[i] = (rand() % 200) + 1;
        i++;
    }

    i = 0;

    while( i <= TAM){
        printf("[%d] = %d\n", i, nums[i]);
        i++;
    }

    return 0;
}
