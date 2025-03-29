#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("Digite um número correspondente ao um mês do ano.\n");

    printf("Digite o número: ");
    scanf("%d", &num);

    if(num < 1 || num >12)
        printf("MÊS INVÁLIDO!");

    if(num == 1) printf("Janeiro");
    if(num == 2) printf("Fevereiro");
    if(num == 3) printf("Março");
    if(num == 4) printf("Abril");
    if(num == 5) printf("Maio");
    if(num == 6) printf("Junho");
    if(num == 7) printf("Julho");
    if(num == 8) printf("Agosto");
    if(num == 9) printf("Setembro");
    if(num == 10) printf("Outubro");
    if(num == 11) printf("Novembro");
    if(num == 12) printf("Dezembro");

    return 0;
}
