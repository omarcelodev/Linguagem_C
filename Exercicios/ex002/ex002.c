/*
Autor:Marcelo
Data: 25/02/2025
Função do programa: Calcular a Area da circunferencia e apresenta-la ao usuario

Ex002: Escreva um prg em C que leia o raio de um circulo e calcule
e imprima a sua area. Crie uma constante utilizando o qualificador
const da linguagem C para armazenar o valor de pi.*/

#include <stdio.h>
#include <math.h>

int main(){

    float raio=0, area=0;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("O valor da area dessa circunferencia e: %.2f", area);

    return 0;
}
