#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirnumero(int num){
    printf("%d", num);
}

int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    imprimirnumero(num);

    return 0;
}
