#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i, soma = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(i=1; i <= 10; i++){
        soma += i;
        printf("%d", i);

        if(i < 10){
            printf(" + ");
        } else{
            printf(" = %d\n", soma);
        }

    }

    return 0;
}





