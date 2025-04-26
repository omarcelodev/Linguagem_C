#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 50

int main(){
    int nums[TAM], i;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    srand(time(NULL));
    for(i = 0; i < 51; i++){
        nums[i] = (rand() % 101);
    }

    for(i =0; i < 51; i++){
        printf("[%d] = %d\n", i, nums[i]);
    }

    return 0;
}
