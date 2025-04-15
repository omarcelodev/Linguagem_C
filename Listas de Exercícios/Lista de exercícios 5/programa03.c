#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    for(i = 0; i < 20; i++){
        printf("Palavra Qualquer\n");
    }

    return 0;
}
