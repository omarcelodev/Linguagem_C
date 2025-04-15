#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    while(i < 20){
        printf("Palavra Qualquer\n");
        i++;
    }
}
