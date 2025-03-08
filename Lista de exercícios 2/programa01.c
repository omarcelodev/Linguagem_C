#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    float num1=0, num2=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número real: ");
    scanf("%f", &num1);

    printf("O número arredondado pra cima é: %.1f\n", ceil(num1));
    printf("O número arredondado para baixo é: %.1f\n", floor(num1));
    printf("A parte decimal do número é: %.2f\n", modf(num1, &num2));
    printf("A parte inteira do número é: %d", (int)num1);


    return 0;}
