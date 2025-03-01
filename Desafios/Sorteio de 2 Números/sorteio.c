#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num1 , num2;

    srand(time(NULL));

    num1 = (rand()%10) + 1;
    num2 = (rand()%10) + 1;

    while(num1 == num2){
        num2 = (rand()%10) + 1;
    }

    printf("O primeiro numero e %d.\n", num1);
    printf("O segundo numero e %d.\n", num2);

    return 0;}
