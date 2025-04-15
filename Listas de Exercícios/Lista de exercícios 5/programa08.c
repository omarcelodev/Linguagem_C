#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num, cont;
    char palavra[50];
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite uma palavra: ");
        scanf("%s", palavra);

        printf("Digite um número: ");
        scanf("%d", &num);

        if(num <= 0){
        printf("\nDigite um número Positivo e maior que 0!\n\n");

        } else{
            for(cont = 0; cont < num; cont = cont + 1){
                printf("%s\n", palavra);
            }
        }

    }while(num <= 0);

    return 0;
}
