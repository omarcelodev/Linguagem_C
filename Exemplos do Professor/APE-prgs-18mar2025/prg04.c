#include <stdio.h>

int main(void) {
    int mes = 0;

    printf("Entre com o numero do mes do ano: ");
    scanf("%d", &mes);

    if (mes == 1)
        printf("Jan");

    if (mes == 2)
        printf("Fev");

    if (mes == 3)
        printf("Mar");

    if (mes == 4)
        printf("Abr");

    if (mes == 5)
        printf("Mai");

    if (mes == 6)
        printf("Jun");

    if (mes == 7)
        printf("Jul");

    if (mes == 8)
        printf("Ago");

    if (mes == 9)
        printf("Set");

    if (mes == 10)
        printf("Out");

    if (mes == 11)
        printf("Nov");

    if (mes == 12)
        printf("Dez");

    if (mes < 1 || mes > 12)
        printf("Mes invalido!");

     return 0;
}
