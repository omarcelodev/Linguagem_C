/*Ex002: Escreva um prg em C que leia o raio de um circulo e calcule
e imprima a sua area. Crie uma constante utilizando o qualificador
const da linguagem C para armazenar o valor de pi.*/

#include <stdio.h>

int main(){

    float raio=0, area=0;
    const float PI=3.14;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = (PI * raio * raio);

    printf("O valor da area dessa circunferencia e: %.2f", area);



    return 0;}
