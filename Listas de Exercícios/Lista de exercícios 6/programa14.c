#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    int idade = -1;
    bool idadeInvalida;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(idade != 0){
        do{
            idadeInvalida = false;
            printf("Digite a sua idade: ");
            scanf("%d", &idade);

            if(idade < 0 || idade > 100){
                printf("\nIdade inválida, Redigite!\n");
                idadeInvalida = true;
            } else if(idade == 0){
                printf("\nPrograma Encerrado!\n");
            }

        }while(idadeInvalida);

        if(idade >= 5 && idade <= 7){
            printf("Categoria: Infantil A\n\n");
        }else if(idade >= 8 && idade <= 10){
            printf("Categoria: Infantil B\n\n");
        }else if(idade >= 11 && idade <= 13){
            printf("Categoria: Juvenil A\n\n");
        }else if(idade >= 14 && idade <= 17){
            printf("Categoria: Juvenil B\n\n");
        }else if(idade >= 18){
            printf("Categoria: Adulto\n\n");
        }else{
            printf("Sem categoria disponível para essa idade.\n\n");
        }
    }

    return 0;
}
