#include <stdio.h>

int main(void) {
    int x, y, z, maior;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &x);

    printf("Entre com o segundo numero: ");
    scanf("%d", &y);

    printf("Entre com o terceiro numero: ");
    scanf("%d", &z);

    if (x > y && x > z) {
        maior = x;
    } else {
        if (y > z) {
            maior = y;
        } else {
            maior = z;
        }
    }

    printf("O maior numero e' %d\n\n", maior);

    return 0;
}
