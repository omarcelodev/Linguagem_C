#include <stdio.h>
#include <locale.h>
int somar(int a, int b){
    int c;

    c = a + b;

    return c;
}

int main(){
    int x, y, z;
    setlocale(LC_ALL,"Portuguese");
    system("color 0A");

    printf("Entre c/ um inteiro: ");
    scanf("%d", &x);

    printf("Entre c/ outro inteiro: ");
    scanf("%d", &y);

    z = somar(x, y);

    printf("A soma � %d", z);

    return 0;
}
