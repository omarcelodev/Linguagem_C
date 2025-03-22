#include <stdio.h>
#include <locale.h>

int main() {
    int mes;
    const char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                           "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    setlocale(LC_ALL, "Portuguese");
    printf("Entre com o número de um mês do ano: ");
    scanf("%d", &mes);

    if (mes > 0 && mes < 13)
        printf("Mês: %s\n", meses[--mes]);
    else
        printf("Mês inválido.\n");

    return 0;
}
