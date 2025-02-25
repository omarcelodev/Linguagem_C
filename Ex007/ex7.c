#include <stdio.h>
#include <math.h>

int main(){
    float lado, area, dobro;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = pow(lado, 2);
    dobro = area * 2;

    printf("O valor da area desse quadrado e: %.2f\n", area);
    printf("O dobro do valor dessa area e: %.2f\n", dobro);

    return 0;
}
