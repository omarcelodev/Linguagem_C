#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    float num1=0, num2=0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero real: ");
    scanf("%f", &num1);

    printf("O n�mero arredondado pra cima �: %.1f\n", ceil(num1));
    printf("O n�mero arredondado para baixo �: %.1f\n", floor(num1));
    printf("A parte decimal do n�mero �: %.2f\n", modf(num1, &num2));
    printf("A parte inteira do n�mero �: %d", (int)num1);


    return 0;}
