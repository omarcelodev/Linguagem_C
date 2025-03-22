#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Calculadora de IMC.\n");

    printf("Insira o seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Insira a sua altura em metros: ");
    scanf("%f", &altura);

    if(peso < 0 || altura < 0)
        printf("Digite um valor válido");

    imc = peso / pow(altura, 2);

    printf("O seu IMC é de: %.2f\n", imc);

    if(imc < 18.5){
        printf("Você está abaixo do peso normal");
    }else if(imc > 18,5 && imc < 25){
        printf("Você está com o peso normal");
    }else if(imc >= 25 && imc < 30){
        printf("Você está acima do peso");
    }else if(imc >= 30 && imc < 35){
        printf("Obesidade Classe I");
    }else if(imc >=35 && imc < 40){
        printf("Obesidade Classe II");
    }else if(imc >= 40){
        printf("Obesidade Classe III");
    }

    return 0;
}
