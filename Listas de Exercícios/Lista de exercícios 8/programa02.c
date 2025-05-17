#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int imprimirnumero(int x){
    printf("%d", x);
}

int main(){
    int x = 5;

    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    imprimirnumero(x);

    return 0;
}
