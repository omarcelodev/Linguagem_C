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
    i = 0;
    do{
        nums[i] = (rand() % 401) + 100;
        i++;
    }while( i <= TAM);

    i = 0;
    do{
        printf("[%d] = %d\n", i, nums[i]);
        i++;
    }while( i <= TAM);

    return 0;
}
