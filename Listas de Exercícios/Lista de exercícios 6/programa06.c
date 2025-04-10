#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    int intervaloChute, quantidade, i, numero;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite um número entre 10 e 100: ");
        scanf("%d", &intervaloChute);

        if(intervaloChute < 10 || intervaloChute > 100)
            printf("Intervalo inválido.\n");

    }while(intervaloChute < 10 || intervaloChute > 100);

    printf("Digite uma quantidade: ");
    scanf("%d", &quantidade);

    srand(time(NULL));

    for(i = 1; i <= quantidade; i++){
        numero = (rand() % intervaloChute) + 1;
        printf("%d\n", numero);
    }

    return 0;
}
