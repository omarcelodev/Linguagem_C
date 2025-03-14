#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0, delta = 0.0;

    printf ("a: "); scanf ("%f" ,&a);
    printf ("b: "); scanf ("%f" ,&b);
    printf ("c: "); scanf ("%f" ,&c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf ("\npow(b, 2) = %.2f\n", pow(b, 2));
        printf ("\ndelta = %.2f\n", delta);
        printf ("\nx1 = %f\n", x1);
        printf ("\nx2 = %f\n", x2);
    }

    system("pause");
    return(0);
}
