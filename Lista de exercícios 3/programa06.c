#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite dois n�meros e lhe informaremos qual � o maior entre os dois.\n");
    printf("Insira um n�mero: ");
    scanf("%d", &num1);
    printf("Insira o segundo n�mero: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("Os n�meros s�o iguais");
    } else{
         if(num1 > num2){
        printf("%d", num1);
        }else{
        printf("%d", num2);
        }
    }

    return 0;
}
