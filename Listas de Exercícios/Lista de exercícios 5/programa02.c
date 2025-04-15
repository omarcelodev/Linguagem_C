#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int i = 0;
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");

    do{
        printf("Palavra Qualquer\n");
        i++;
    }while(i < 20);
}
