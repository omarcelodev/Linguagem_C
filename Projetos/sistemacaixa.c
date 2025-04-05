#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float p1 = (5.30), p2 = (3.45), p3 = (10.50), p4 = (2.50), p5 = (6.75);
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    printf("CAIXA.\n\n");
    printf("Produtos:     | Código Produto:  | Preço (R$)\n");
    printf("---------------------------------------------\n");
    printf("Cebola        | 001              | %.2f\n", p1);
    printf("Tomate        | 002              | %.2f\n", p2);
    printf("Achocolatado  | 003              | %.2f\n", p3);
    printf("Alface        | 004              | %.2f\n", p4);
    printf("Leite         | 005              | %.2f\n", p5);

    printf("Digite o código do produto: ");
    scanf("%d")

    return 0;
}
