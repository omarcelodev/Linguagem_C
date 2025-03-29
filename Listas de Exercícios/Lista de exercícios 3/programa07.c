#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1 ,num2, num3;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite três números e lhe informaremos qual é o maior entre os três.\n");

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    printf("Insira o terceiro número: ");
    scanf("%d", &num3);

    if(num1 == num2 && num2 == num3){
        printf("Os números são iguais");
    } else{
    if(num1 > num2 && num1 > num3){
        printf("O maior número é: %d\n", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("O maior número é: %d\n", num2);
    }else{
        printf("O maior número é: %d\n", num3);
    }}

    return 0;
}
