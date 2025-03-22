#include <stdio.h>

int main(void) {
    int mes = 0;

    printf("Entre com o numero do mes do ano: ");
    scanf("%d", &mes);

    /** Estrutura switch sem break e' bastante incomum */

    switch (mes) {
        case 1: printf("Jan");
        case 2: printf("Fev");
        case 3: printf("Mar");
        case 4: printf("Abr");
        case 5: printf("Mai");
        case 6: printf("Jun");
        case 7: printf("Jul");
        case 8: printf("Ago");
        case 9: printf("Set");
        case 10: printf("Out");
        case 11: printf("Nov");
        case 12: printf("Dez");
        default: printf("Mes invalido!");
    }

    return 0;
}
