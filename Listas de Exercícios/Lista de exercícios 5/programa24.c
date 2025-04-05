#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i, soma = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(i=0; i <= 10; i = i + 1){
        soma = soma + i;
    }

    printf("A soma dos números de 1 a 10 é %d\n",soma);

    return 0;
}





