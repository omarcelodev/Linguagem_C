#include <stdio.h>
#include <math.h>

int main(void) {
    printf("ceil(3.2) = %.2f\n", ceil(3.2));  // arredonda real para cima
    printf("floor(3.2) = %.2f\n", floor(3.2));  // arredonda real para baixo

    double parteFracionaria;
    double parteInteira;
    parteFracionaria = modf(3.251245, &parteInteira);
    printf("modf(3.25) = %.2f e %.6f\n", parteInteira, parteFracionaria);

    printf("pow(3, 2) = %.2f\n", pow(3, 2));  // potência de x elevado a y
    printf("sqrt(153.48) = %.2f\n", sqrt(153.48));  // raiz quadrada de x
    printf("PI = %.10f\n", M_PI);

    return 0;
}
