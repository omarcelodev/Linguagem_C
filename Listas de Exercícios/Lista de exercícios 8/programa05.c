#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar(int num){

    if(num % 2 == 0){
        printf("O número %d é par", num);
    }else{
        printf("O número %d é impar", num);
    }

}

int lerNumero(void){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    return num;
}

int main(){
    int num;

    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    num = lerNumero();
    verificarParOuImpar(num);


    return 0;
}



