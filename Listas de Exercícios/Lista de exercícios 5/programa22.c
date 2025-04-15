#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont;
    int num = 0;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("Digite um número positivo e maior que 0\n");
        } else{
                for(cont = 1; cont <= num; cont = cont + 1){
                    printf("%d\n", cont);
                }
            }

    }while(num <= 0);

    return 0;
}





